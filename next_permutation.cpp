#include <bits/stdc++.h> 
int No_to_word(int no){
    string r;
    switch(no){
        case 1:
            r="one";
            break;
        case 2:
            r="two";
            break;
        case 3:
            r="three";
            break;
        case 4:
            r="four";
            break;
        case 5:
            r="five";
            break;
        case 6:
            r="six";
            break;
        case 7:
            r="seven";
            break;
        case 8:
            r="eight";
            break;
        case 9:
            r="nine";
            break;
        case 0:
            r="zero";
            break; 
    }
    return r;
}
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++){
            if(No_to_word(permutation[j]>No_to_word(permutation[i]))
                
        }
}

