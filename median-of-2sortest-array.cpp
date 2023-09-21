class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<float> v;
        float m;
        for(auto n:nums1)
            v.push_back(n);

        for(auto n:nums2)
            v.push_back(n);

        sort(v.begin(),v.end());
        m=(v.size()%2==0)?(v[v.size()/2]+v[(v.size()/2)-1])/2:v[(v.size()-1)/2];
       /*  {
           m=(v[v.size()/2]+v[(v.size()/2)-1])/2;
        }
        else return v[(v.size()-1)/2]; */
        return m;
        
    }
};