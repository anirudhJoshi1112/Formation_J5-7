class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp=nums[0];
        vector<int> ans;
        ans.push_back(temp);
        for(int i=1;i<nums.size();i++){
            temp=temp+nums[i];
            ans.push_back(temp);
        }
        return ans;
    }
};
