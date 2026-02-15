class Solution {
public:
    bool isvalid(char c)
    {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='O' || c=='I' || c=='U';
    }
    string reverseVowels(string s) {
        int l = 0 ;
        int r = s.length()-1;
        while(l<r)
        {
            while(l<r && !isvalid(s[l]))
                l++;
            while(l<r && !isvalid(s[r]))
                r--;
            if(l<r)
                swap(s[l++],s[r--]);
        }
        return s;
    }
};