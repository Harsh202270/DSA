class Solution {
    public:
        int reverseBits(int n) {
            string binary = "";
            int count = 32;
                while(n>0)
                {
                    int rem = n % 2;
                    if(rem==1)
                        binary = binary + "1";
                    else
                        binary = binary + "0";
                    n = n/2;
                    count--;
                }
                
                for(int i=binary.length();i<32;i++)
                {
                    binary = binary + "0";
                }
                long long total=0;
                long long digit=1;
                for(int i=31;i>=0;i--)
                {
                    if (i!=31)
                        digit = digit * 2;
                    if (binary[i]=='1')
                        total = total + digit;
                    
                }
            return total;
        }
};