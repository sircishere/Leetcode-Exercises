class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove leading, trailing, and extra spaces
        trimSpaces(s);

        // Step 2: Reverse the entire string
        reverse(s.begin(), s.end());

        int start = 0;
        int length = s.length();

        // Step 3: Reverse each word in the reversed string
        for (int end = 0; end < length; end++) {
            if (s[end] == ' ' || end == length - 1) {
                int wordEnd = (s[end] == ' ') ? end - 1 : end;
                reverse(s.begin() + start, s.begin() + wordEnd + 1);
                start = end + 1;
            }
        }

        return s;
    }

private:
    // Helper function to trim spaces
    void trimSpaces(string &s) {
        int n = s.size();
        int i = 0, j = 0;

        // Remove leading spaces
        while (i < n && s[i] == ' ') i++;

        // Remove extra spaces between words
        while (i < n) {
            if (s[i] != ' ') {
                s[j++] = s[i++];
            } else if (s[j - 1] != ' ') {
                s[j++] = s[i++];
            } else {
                i++;
            }
        }

        // Remove trailing space if present
        if (j > 0 && s[j - 1] == ' ') j--;

        // Resize the string to the new length
        s.resize(j);
    }
};
