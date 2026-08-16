class Solution {
public:
    bool isPalindrome(string s) {
        /*
        A-Z => 65 to 90
        a-z => 97 to 122
        In this problem , we should only consider alphanumeric and exclude other special char palindrome

        In Built method to check valid alphanumeric => isalnum(s[i])

        Algorithm:
        1. Initialize left , right pointers - one at start of string and other at end of string
        2. For a valid left and right (only alphabets) check if char at both left and right pointers are equal or not 
           Equal -> incr left,decr right
           Not Equal -> return false
        3. If its not a valid char at left -> incr left
        4. If its not a valid char at right -> decr right
        5. Perform step 1 to 4 only if left < right 
        */
        int n = s.size();
        int left = 0;
        int right = n - 1;
        for (char&c:s){
            c = tolower(c);
        }
        while (left < right) {
            bool isValidLeft = isalnum(s[left]);
            bool isValidRight = isalnum(s[right]);
            if (isValidLeft && isValidRight) {
                if (s[left] != s[right]) return false;
                left++;
                right--;
            }
            else if (!isValidRight) right--;
            else left++;
        }
        return true;
    }
};
