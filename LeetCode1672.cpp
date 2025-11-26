class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxAmount=0;
        for(int i=0;i<accounts.size();i++){
            int amount=0;
            for(int j=0;j<accounts[i].size();j++){
                amount+=accounts[i][j];
            }
            maxAmount=max(maxAmount,amount);
        }
        return maxAmount;
    }
};
