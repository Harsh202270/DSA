class Solution {
public:
    string addBinary(string a, string b) {
       string ans,ans1;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry =carry + a[i--] - '0';
      if (j >= 0)
        carry = carry + b[j--] - '0';
      char c = carry % 2 + '0';
      ans = ans + c;
      carry = carry / 2;
    }
    reverse(begin(ans), end(ans));
    return ans;
    }
};