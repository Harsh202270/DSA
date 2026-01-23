class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um;
        int max = 0;
        int mazority;
        for(int i:nums){
            um[i]++;
            if(um[i]>max){
                max = um[i];
                mazority = i;
            }
        }
        return mazority;
    }
};