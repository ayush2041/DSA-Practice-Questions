class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int lt = 0;
        int rt = s.size()-1, ans = 0;
        while(lt<rt){
            int i = lt, j = rt;
            while(s[i] != s[j]){
                j--;
            }
            if(i == j){
                swap(s[i], s[j+1]);
                ans++;
                continue;
            } else{
                while(j<rt){
                    swap(s[j], s[j+1]);
                    ans++;
                    j++;
                }

            }
            lt++, rt--;
        }
        return ans;
    }
};