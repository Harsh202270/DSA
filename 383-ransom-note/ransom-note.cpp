class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int i =0,j=0;
        int n=ransomNote.size();
        int m = magazine.size();
        while(i<n&& j<m){
            if(ransomNote[i]==magazine[j]){
                if(i==n-1){
                    return true;
                }
                i++;
            }
            j++;
        }
        return false;
    }
};