class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), le = INT_MIN, c =0, a = 1;
        if(n<1)
            return 0;
        unordered_set<int> st;
        for(auto &i : nums)
            st.insert(i);
        for(auto &it : st)
        {
            if(st.find(it-1)==st.end())
            {
                int x = it;
                int c=1;
                while(st.find(++x)!=st.end())
                {
                    c++;
                }
                a = max(a, c);
            }
        }
        return a;
    }
};