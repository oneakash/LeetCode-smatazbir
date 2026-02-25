class NumArray {

    int* tree;
    vector<int> arr;
    void build(int treeArrayIndex, int originArrayLeft, int originArrayRight){
        if(originArrayLeft == originArrayRight){
            // single element
            tree[treeArrayIndex] = arr[originArrayLeft];
            return;
        }
        int treeArrayLeftIndex = treeArrayIndex * 2;
        int treeArrayRightIndex = treeArrayIndex * 2 + 1;
        int originArrayMid = (originArrayLeft + originArrayRight) / 2;

        build(treeArrayLeftIndex, originArrayLeft, originArrayMid);
        build(treeArrayRightIndex, originArrayMid + 1, originArrayRight);

        tree[treeArrayIndex] = tree[treeArrayLeftIndex] + tree[treeArrayRightIndex];
    }

    void update(int treeArrayIndex, int originArrayLeft, int originArrayRight, int originalArrayUpdateIndex, int value){

        if(originArrayLeft == originArrayRight){
            // single element
            tree[treeArrayIndex] = value;
            return;
        }
        int treeArrayLeftIndex = treeArrayIndex * 2;
        int treeArrayRightIndex = treeArrayIndex * 2 + 1;
        int originArrayMid = (originArrayLeft + originArrayRight) / 2;
        
        if(originalArrayUpdateIndex <= originArrayMid)
        update(treeArrayLeftIndex, originArrayLeft, originArrayMid, originalArrayUpdateIndex, value);

        else
        update(treeArrayRightIndex, originArrayMid + 1, originArrayRight, originalArrayUpdateIndex, value);

        tree[treeArrayIndex] = tree[treeArrayLeftIndex] + tree[treeArrayRightIndex];
    }



    int query(int treeArrayIndex, int originArrayLeft, int originArrayRight, int queryLeft, int queryRight){

        // originalarrayportion is fully inside query
        if(queryLeft <= originArrayLeft && originArrayRight <= queryRight){
            return tree[treeArrayIndex];
        }

        // fully outside
        if(originArrayRight < queryLeft || queryRight < originArrayLeft){
            return 0;
        }

        int treeArrayLeftIndex = treeArrayIndex * 2;
        int treeArrayRightIndex = treeArrayIndex * 2 + 1;
        int originArrayMid = (originArrayLeft + originArrayRight) / 2;
        
        int leftAnswer = query(treeArrayLeftIndex, originArrayLeft, originArrayMid, queryLeft, queryRight);
        int rightAnswer = query(treeArrayRightIndex, originArrayMid + 1, originArrayRight, queryLeft, queryRight);

        return leftAnswer + rightAnswer;
    }

public:
    NumArray(vector<int>& nums) {
        arr = nums;
        tree = new int[nums.size() * 4];
        build(1, 0, nums.size() - 1);
    }
    
    void update(int index, int val) {
        update(1, 0, arr.size() - 1, index, val);
    }
    
    int sumRange(int left, int right) {
        return query(1, 0, arr.size() - 1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */