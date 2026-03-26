class Solution {
public:
    string countAndSay(int n) {
        string ans = "";
        string curr="1";
        if (n==1){
            return curr;
        }
        for(int i=2;i<=n;i++)
        {
            string temp = curr;
            curr="";
            int j=1;
            int count=1;
            while(j<temp.length())
            {
                if(temp[j-1]==temp[j])
                {
                    count++;
                    j++;
                    continue;
                }
                curr = curr + to_string(count)+temp[j-1];
                count=1;
                j++;
            }
            curr = curr + to_string(count)+temp[j-1];
        }
        ans = curr;
        return ans;
    }
};