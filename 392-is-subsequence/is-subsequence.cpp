class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int i;
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    i++;
                    continue;
                }
            }
            if(j==t.length())
                break;
        }
        if(i==s.length())
            return true;
        return false;
    }
};