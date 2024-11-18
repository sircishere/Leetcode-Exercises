class Solution {
public:
    string reverseVowels(string s) {
        auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int left = 0, right = s.length() - 1;

        while (left < right) {
            // Move left pointer to the next vowel
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move right pointer to the previous vowel
            while (left < right && !isVowel(s[right])) {
                right--;
            }

            // Swap the vowels
            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};


//chatgpt generated this uses the two pointer technique to pass through the string only once