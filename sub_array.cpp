class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,cur=0;
       // float max=-INFINITY;
        int max=nums[0];
        int size=nums.size();
        for(int i=0;i<size;i++){
            cur+=nums[i];
            if(cur>max)
                max=cur;
            if(cur<0)
                cur=0;
        }
        return max;
    }
};