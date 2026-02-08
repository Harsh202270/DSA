class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;
        bool sign = false;
        vector<int> ans;
        int i = 0;
        while(i < s.size() && s[i] == ' ')
        {
            i++;
        }
        if(i < s.size() && (s[i] == '-' || s[i] == '+')) {
            if(s[i] == '-') 
                sign = true;
            i++;
        }
        while(i < s.size() && isdigit(s[i])) {
            int no = s[i] - '0';
            if(result > (INT_MAX - no) / 10) {
                return sign ? INT_MIN : INT_MAX;
            }
            result = result * 10 + no;
            i++;
        }

        return sign ? -result : result;
    }
};
