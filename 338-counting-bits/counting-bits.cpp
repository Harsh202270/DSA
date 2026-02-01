class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        if(n>=0)
            ans.push_back(0);
        for(int i=1;i<=n;i++){
            int count =0;
            int no = i;
            while(no>0)
            {
                if(no%2==1)
                    count++;
                no=no/2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};