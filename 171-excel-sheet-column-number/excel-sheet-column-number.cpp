class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(),columnTitle.end());
        int sum = 0;
        for(int i=0;columnTitle[i]!='\0';i++)
        {
            int temp = columnTitle[i]-'A'+1;
            for(int j=0;j<i;j++)
            {
                temp = temp *26;
            }
            sum = sum + temp;
        }
        return sum;
    }
};