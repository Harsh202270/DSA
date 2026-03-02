class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26]={0};
        int i;
        for(i=0;i<s.length() ;i++)
        {   
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        if(t.length()==i+1)
            arr[t[i]-'a']--;
        for(i=0;i<26;i++)
        {
            if(arr[i]==-1)
            {
                return i+'a';
            }
        }
        return 'a';
    }
};