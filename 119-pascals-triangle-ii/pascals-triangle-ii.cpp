class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        vector<int> tempprev;
        vector<int> curr ,ans;
        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                    curr.push_back(1);
                else if(j==i)
                    curr.push_back(1);
                else
                    curr.push_back(tempprev[j-1]+tempprev[j]);
            }
            tempprev.clear();
            tempprev = curr;
            curr.clear();
        }
        return tempprev;
    }
};
