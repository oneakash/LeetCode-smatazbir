class NumArray {
private:
    vector<int> arr;
    vector<int> tree;
    void build(int i, int l, int r){
        if(l==r){
            tree[i] = arr[l];
            return;
        }
        int li = i*2, ri = i*2+1;
        int m = (l+r)/2;
        build(li, l, m);
        build(ri, m+1, r);
        tree[i] = tree[li]+tree[ri];
    }
    void update(int i, int l, int r, int ui, int val){
        if(l==r){
            tree[i] = val;
            return;
        }
        int li = i*2, ri = i*2+1;
        int m = (l+r)/2;
        if(ui<=m)
        update(li, l, m, ui, val);
        else
        update(ri, m+1, r, ui, val);
        tree[i] = tree[li]+tree[ri];
    }
    int query(int i, int l, int r, int ql, int qr){
        if(ql<=l && qr>=r){
            return tree[i];
        }
        if(qr<l || ql>r){
            return 0;
        }
        int li = i*2, ri = i*2+1;
        int m = (l+r)/2;
        int lans = query(li, l, m, ql, qr);
        int rans = query(ri, m+1, r, ql, qr);
        return lans+rans;
    }
public:
    NumArray(vector<int>& nums) {
        arr = nums;
        tree.resize(nums.size()*4);
        build(1, 0, arr.size()-1);
    }
    
    void update(int index, int val) {
        update(1, 0, arr.size()-1, index, val);
    }
    
    int sumRange(int left, int right) {
        return query(1, 0, arr.size()-1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */