class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> rows;
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            for(int j=0;j<i;j++){
                if(j==0 || j==i-1)
                rows.push_back(1);
                else{
                    rows.push_back(ans[i-2][j-1]+ans[i-2][j]);
                }
            }
            ans.push_back(rows);
            rows.clear();
        }
        return ans;
    }
};