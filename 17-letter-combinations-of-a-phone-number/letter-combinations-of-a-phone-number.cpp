class Solution {
private:
    void solve(string digits , vector<string>& ans , string temp , int index , string arr[])
    {
        if(index == digits.length()) {
            ans.push_back(temp);
            return;
        }
        int num = digits[index]-'0';
        string value = arr[num];
        for(int i=0;i<value.length();i++)
        {
            temp.push_back(value[i]);
            solve(digits , ans , temp ,index+1 ,arr);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
            return ans;
        string temp="";
        int index = 0;
        string arr[10] = { "" , "" , "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits , ans , temp , index , arr);
        return ans;
    }
};