class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size()-1;
        int j=t.size()-1;
        int skip_s=0;
        int skip_j=0;
        while(i>=0||j>=0){
            while(i>=0){
                if(s[i]=='#'){
                    skip_s++;
                    i--;
                }
                else if(skip_s>0){
                    skip_s--;
                    i--;
                }
                else
                break;
            }
            while(j>=0){
                if(t[j]=='#'){
                    skip_j++;
                    j--;
                }
                else if(skip_j>0){
                    skip_j--;
                    j--;
                }
                else
                break;
            }
            char first=i<0?'$':s[i];
            char second=j<0?'$':t[j];
            if(first!=second)
            return false;

            i--;
            j--;
        }
        return true;
    }    
};