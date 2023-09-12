class Solution {
public:
    int jump(vector<int>& nums) {
       int far=0,end=0,step=0;
       int size=nums.size()-1;
       for(int i=0;i<size;i++){
           far=max(far,nums[i]+i);
           if(i==end){
               step++;
               end=far;
           }
       }
       return step;
    }
};