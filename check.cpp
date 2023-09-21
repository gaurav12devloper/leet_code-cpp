/* // Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int> nums) {
        int index,temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
          index=nums[i];
          nums[index]=nums[index]+5;
          printf("%d",nums[index]);
        }
        return 0;
    }
};

int main() {
    vector<int> v={1,3,4,2,2};
    Solution a;
    a.findDuplicate(v);
    return 0;
} */





#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left=0,right=nums.size()-1,count=0;
        while(left<=right && x!=0){
            cout<<++count;
            if(nums[left]<nums[right]){
                if(nums[right]<=x){
                    x-=nums[right];
                    right--;
                }
                else {
                    if(nums[left]<=x){
                        x-=nums[left];
                        left++;
                    }
                    else
                        return -1;
                }
            }
            else{
                if(nums[left]<=x){
                    x-=nums[left];
                    left++;
                }
                else {
                     if(nums[right]<=x){
                        x-=nums[right];
                        right--;
                     }
                     else return -1;
                }

            } cout<<"aa"<<x;
            if(left>right && x!=0){
                return -1;
            }
        }
    return count;
    }
};


int main() {
    vector<int> nums={5207,5594,477,6938,8010,7606,2356,6349,3970,751,5997,6114,9903,3859,6900,7722,2378,1996,8902,228,4461,90,7321,7893,4879,9987,1146,8177,1073,7254,5088,402,4266,6443,3084,1403,5357,2565,3470,3639,9468,8932,3119,5839,8008,2712,2735,825,4236,3703,2711,530,9630,1521,2174,5027,4833,3483,445,8300,3194,8784,279,3097,1491,9864,4992,6164,2043,5364,9192,9649,9944,7230,7224,585,3722,5628,4833,8379,3967,5649,2554,5828,4331,3547,7847,5433,3394,4968,9983,3540,9224,6216,9665,8070,31,3555,4198,2626,9553,9724,4503,1951,9980,3975,6025,8928,2952,911,3674,6620,3745,6548,4985,5206,5777,1908,6029,2322,2626,2188,5639};
    Solution a;
    cout<<a.minOperations(nums,565610);
    return 0;
}