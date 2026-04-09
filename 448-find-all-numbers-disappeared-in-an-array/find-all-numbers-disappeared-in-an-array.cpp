class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int temp = 1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            while(temp<nums[i])
            {
                ans.push_back(temp);
                temp++;
            }
            if(i<n-2 && nums[i]==nums[i+1])
                continue;
            if(temp == nums[i])
                temp++;
        }
        while(temp<=n)
        {
            ans.push_back(temp);
            temp++;
        }
        return ans;
    }
};