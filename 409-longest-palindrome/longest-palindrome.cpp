class Solution {
public:
    int longestPalindrome(string s) {
        int pos=0;
        int ans[52]={0};
        bool valid = true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] >=65 && s[i]<=90)
                ans[s[i]-'A']++;
            else if(s[i]>=97 && s[i]<=122)
                ans[26+s[i]-'a']++;
        }
        for(int i=0;i<52;i++)
        {
            int q = ans[i]/2;
            pos = pos + q*2;
            if(valid && ans[i]%2==1)
            {
                pos = pos + 1;
                valid = false;
            }
            cout<<ans[i];
        }
        return pos;
    }
};