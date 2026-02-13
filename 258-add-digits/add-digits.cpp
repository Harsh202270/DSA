class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        int count;
        while(num>=10)
        {
            count = 0;
            int no = num;
            while (no>0)
            {
                int digit = no % 10;
                count = count + digit;
                no = no / 10;
            }
            num = count ;
        }
        return count;
    }
};