class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long long ans=0;
        bool sign = (dividend<0) ^ (divisor<0);
        long long dvd = llabs(dividend);
        long long dvs = llabs(divisor);
        while(dvd>=dvs)
        {
            long long temp = 1;
            while(0<= (dvd - (dvs*temp*2)))
            {
                temp = temp*2;
            }
            ans = ans + temp;
            dvd = dvd - (dvs*temp);
            
        }
        if(sign)
            return -ans;
        else
            return ans;
    }
};