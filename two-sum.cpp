class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int total,i,j;
        vector<int> a;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                total=nums[i]+nums[j];
                if(target==total)
                {
                    a={i,j};
                    break;
                }
            }
        }
        return a;
    }
};