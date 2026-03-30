class Solution {
public:
    bool isHappy(int n) {
        int temp=n;
        unordered_map<int,int> um;
        while(um.find(temp)==um.end())
        {
            int rem;
            int temp1=temp;
            int temptotal=0;
            while(temp!=0)
            {
                rem = temp % 10;
                temp = temp / 10;
                temptotal = rem * rem + temptotal;
            }
            if(temptotal==1)
                return true;
            um[temp1]=temptotal;
            temp = temptotal;
        }
        return false;
    }
};