class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size(),total=0;
         vector<int> L(size,1),R(size,1);
        for(int i=1,j=size-1;i<size,j>0;i++,j--){
            //go left to right and check ith element with i-1.
            if(ratings[i]>ratings[i-1])
                L[i]=L[i-1]+1;
            //move right to left and check j-1  element with j.
            if(ratings[j]<ratings[j-1])
                R[j-1]=R[j]+1;
        }
        for(int k=0;k<size;k++){
            if(L[k]>R[k])
                total+=L[k];
            else
                total+=R[k];
        }
        return total;
    }
};