class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int idx = -1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]>arr[i+1])
            {
                idx =i;
                break;
            }
        }
        if(idx==-1)
            return arr;
        for(int i=arr.size()-1;i>idx;i--)
        {
            if(arr[i]<arr[idx] && arr[i]!=arr[i-1])
            {
                swap(arr[idx],arr[i]);
                break;
            }
        }
        return arr;
    }
};