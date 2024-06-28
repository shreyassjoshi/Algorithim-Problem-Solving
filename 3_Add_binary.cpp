
//Given two binary strings a and b, return their sum as a binary string.

//https://leetcode.com/problems/add-binary/description/

class Solution {

public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while(i >= 0 or j >= 0 or carry) {
            if (i >= 0)
            carry += a[i--] - '0';
            if (j >= 0)
            carry += b[j--] - '0';
            ans += carry % 2 + '0';
            carry /= 2;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};
     