class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==first || nums[i]==second || nums[i]==third)
                continue;
            if(first<nums[i])
            {
                third=second;
                second = first;
                first = nums[i];
            }
            else if(second<nums[i])
            {
                third = second;
                second = nums[i];
            }
            else if(third<nums[i])
            {
                third = nums[i];
            }
        }
        if (third==LONG_MIN)
            return first;
        return third;
    }
};