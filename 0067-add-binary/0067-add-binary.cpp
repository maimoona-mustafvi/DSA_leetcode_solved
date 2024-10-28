class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";  // Initialize result string to store the sum
        int carry = 0;       // Initialize carry to 0
        int i = a.size() - 1, j = b.size() - 1;  // Pointers to traverse the strings from the end
        
        // Loop through both strings from the rightmost bit to the left
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;  // Start with carry
            if (i >= 0) sum += a[i--] - '0';  // Add bit from 'a' if available, and move pointer
            if (j >= 0) sum += b[j--] - '0';  // Add bit from 'b' if available, and move pointer
            
            result += (sum % 2) + '0';  // Append the sum mod 2 (the current bit) to result
            carry = sum / 2;  // Update carry (either 0 or 1)
        }
        
        reverse(result.begin(), result.end());  // Reverse the result since we were adding from the end
        return result;
    }
};