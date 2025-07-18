class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int c=0,n=arr.size();
        while(k--){
            c++;
            int s=0,e=n-1;
            while(s<=e){
                int mid=(s+e)>>1;
                if(arr[mid]==c){
                    k++;
                    break;
                } else if(arr[mid]<c)s=mid+1;
                else e=mid-1;
            }
        }
        return c;
    }
};