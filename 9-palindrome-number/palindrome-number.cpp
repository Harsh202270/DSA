#include <cmath>
class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) return false;

        int num= x;
        long ans = 0;
        int mod ;
        for(int i=0;num>=1;num=num/10,i++){
            mod= num%10;
            ans = ans*10 +mod;
            
        }
        if (ans ==x){
            return true;
        }else {
            return false;
        }
        
    }


};