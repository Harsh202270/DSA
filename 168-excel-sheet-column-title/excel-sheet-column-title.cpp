class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        do
        {
            columnNumber--;
            int re = columnNumber%26;
            result.push_back(re+'A');
            columnNumber = columnNumber/26;
        }while(columnNumber>0);
        reverse(result.begin(), result.end());
        return result;
    }
};