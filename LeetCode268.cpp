class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int iterator=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=iterator){
                return iterator;
            }
            iterator+=1;
        }
        return nums.size();
    }
};
//Time Complexity = O(NlogN)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=nums.size();
        for(int i=0;i<nums.size();i++){
            res+=i-nums[i];
        }
        return res;
    }
};
//Time Complexity = O(N)
