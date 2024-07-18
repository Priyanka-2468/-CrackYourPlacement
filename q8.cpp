<<<<<<< HEAD
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int l=0;
        int r=0;
        int i=0;
        while(i<s.length()){
            while(i<s.length() && s[i]!=' '){
                s[r++]=s[i++];

            }
            if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            

            s[r]=' ';
            r++;
            l=r;
            }
            i++;
            
        }
        s= s.substr(0,r-1);
        return s;
    }
=======
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int l=0;
        int r=0;
        int i=0;
        while(i<s.length()){
            while(i<s.length() && s[i]!=' '){
                s[r++]=s[i++];

            }
            if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            

            s[r]=' ';
            r++;
            l=r;
            }
            i++;
            
        }
        s= s.substr(0,r-1);
        return s;
    }
>>>>>>> f966c01 (first commit)
};