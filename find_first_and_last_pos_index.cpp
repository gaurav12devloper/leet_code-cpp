class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size(), start=-1,end; 
        for(int i=0;i<size;i++){
             if(target==nums[i]){
                if(start==-1)
                 {
                     start=i;
                 }
                 end=i;
            }
        }
        if(start!=-1)
        {
            return {start,end};
        }
        else{
            return {-1,-1};
        }
    }
};