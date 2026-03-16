class Solution {
public:
    bool validPalindromeHelper(int i, int j, string s){  /// extra function created 
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i<j){
            char left = s[i];
            char right = s[j];

            if(left != right ){
                return validPalindromeHelper(i+1, j, s) || validPalindromeHelper(i, j-1, s);
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};