class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==0 || height.size()==1)
            return 0;
        int left=0,right=height.size()-1,max=0;
        while(left<right)
        {
            int result = min(height[left],height[right]);
            if (max < (result * (right-left)))
                max = result * (right - left);
            if(result==height[left])
                left = left + 1;
            else
                right = right - 1;
        }
        return max;
    }
};