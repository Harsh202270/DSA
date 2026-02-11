class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())   return 0;
        int k=0;
        int ans;
        for(int i=0;i<s.length();i++){
            int a = s[i];
            int b = s[i+1];
            if((64<a && a<123))
                k++;
            else if(a==32 && (64<b && b<123))
                k=0;

        }
        return k;
    }
};