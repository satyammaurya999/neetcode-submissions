class Solution {
    bool Ispallindrome(string &res){
        int i=0;
        int j=res.size()-1;
        while(i<=j){
            if(res[i]!=res[j]){
                   return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string res="";
        stringstream ss(s);
        char ch;
        while(ss>>ch){
             if(isalnum(ch)){
        res += tolower(ch);
    }

        }
        if(Ispallindrome(res)){
            return true;
        }
        return false;
    }
};
