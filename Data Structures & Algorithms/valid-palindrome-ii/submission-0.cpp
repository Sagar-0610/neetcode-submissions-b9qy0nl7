class Solution {
public:
    bool validPalindrome(string s) {
        int st = 0, end = s.size()-1;
        while(st < end){
            if(s[st] != s[end]){
                return ispalindrome(s,st+1,end) || ispalindrome(s,st,end-1);
            }
            st++;
            end--;
        }
        return true;
    }
private:
    bool ispalindrome(const string& s,int st,int end){
        while(st < end){
            if(s[st] != s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};