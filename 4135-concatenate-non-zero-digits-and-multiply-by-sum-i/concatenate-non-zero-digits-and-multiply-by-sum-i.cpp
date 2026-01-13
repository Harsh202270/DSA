class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        int i=0;
        int count = 0 ;
        while(n>0)
        {
            int digit = n % 10 ;
            n = n/10;
            if(digit==0)
                continue;
            ans = digit * pow(10,i) + ans;
            count = count + digit;
            i++;
            
        }
        ans = ans * count;
        return ans;
    }
};