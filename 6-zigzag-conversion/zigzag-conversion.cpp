class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) return s;

        string result;
        int cycle = 2 * numRows - 2;

        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.length(); j += cycle) {
                result += s[j];

                // Add the diagonal element for middle rows
                int second = j + cycle - 2 * i;
                if (i != 0 && i != numRows - 1 && second < s.length()) {
                    result += s[second];
                }
            }
        }

        return result;
    }
};