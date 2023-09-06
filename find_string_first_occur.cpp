class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1=haystack.size();
        int l2=needle.size();
        int i=0,j=0,pos=0;
        while(i<l1){
            if(haystack[i]==needle[j]){
                if(j==l2-1)
                {
                    return pos;
                }
                i++;
                j++;
            }
            else{
                pos++;
                i=pos;
                j=0;
            }
        }
        return -1;

    }
};