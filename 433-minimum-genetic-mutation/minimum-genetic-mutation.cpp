class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> bankset(bank.begin(), bank.end());
        if(bankset.find(endGene) == bankset.end()){
            return -1;
        }
        queue<pair<string, int>> q;
        q.push({startGene, 0});
        unordered_set<string> visited;
        visited.insert(startGene);
        char choices[] = {'A','C','T','G'};
        while(!q.empty()){
            auto [gene, mutations] = q.front();
            q.pop();
            if(gene==endGene) return mutations;
            for(int i = 0; i<8; i++){
                char original = gene[i];
                for(char c : choices){
                    if(c == original) continue;
                    gene[i] = c;
                    if(bankset.find(gene) != bankset.end() && visited.find(gene) == visited.end()){
                        visited.insert(gene);
                        q.push({gene, mutations+1});
                    }
                }
                gene[i]=original;
            }
        }
        return -1;
    }
};