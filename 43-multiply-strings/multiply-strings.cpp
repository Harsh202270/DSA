class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n = num1.size() + num2.size();
        vector<int> arr(n, 0);
        for(int j=0;j<num2.length();j++)
        {
            for(int i=0 ; i<num1.length();i++)
            {
                arr[i + j] += (num1[i] - '0') * (num2[j] - '0');
            }
        }
        string ans="";
        for(int i = 0; i < n; i++)
        {
            int rem = arr[i]%10;
            int qui = arr[i]/10;
            if(i + 1 < n) arr[i+1] += qui;
            ans += to_string(rem);
        }
        reverse(ans.begin(),ans.end());
        while(ans[0] == '0') ans.erase(ans.begin());
        return ans;
    }
};