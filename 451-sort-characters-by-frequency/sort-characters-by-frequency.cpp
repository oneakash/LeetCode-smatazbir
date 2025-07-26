class Solution {
public:
    string frequencySort(string s) {
        string r="";
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto k:mp){
            char c=k.first;
            int fq=k.second;
            pq.push({fq,c});
        
        }
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            r.append(x.first,x.second);
        }

        return r;
    }
};