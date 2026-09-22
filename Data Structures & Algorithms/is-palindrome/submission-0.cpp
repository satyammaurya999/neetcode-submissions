class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        stringstream ss(s);
        char ch;
        while(ss>>ch){
            res+=ch;

        }
        string temp=res;
        reverse(res.begin(),res.end());
        return temp==res;
        
    }
};
