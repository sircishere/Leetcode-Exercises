class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //First we solve the problem then we code it
        //looking at it is simple since you can see the patterns 

        //Compare the lengths of the smaller word with the bigger word
        //find the greatest common divisor between the lengths and name it gcd
        //then I'd iterate to store a string of length gcd
        //that same string I'll use to compare it to the other strings
        //iterate through one string completely while checking the corresponding index
        //making sure they all match
        //do the same thing for the other word
        //return the word if it is the gcd
        //else dont return a word
        //
        //once i find a length that can fit inside the other string
        

    // Check if concatenating word1 + word2 equals word2 + word1
    // This ensures they have a common pattern
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    // Find the GCD of the lengths of both strings
    int gcdLength = std::gcd(str1.size(), str2.size());

    // Return the substring that could be the common divisor
    return str1.substr(0, gcdLength);
}};

// the above approach was done by chatgpt, involving looking at the pattern that since its a gcd its sums should be equals
// no matter the way its added, if they're equal it means there's a gcd. Lesson is to draw and think 
// about the problem in different ways in order to visualize it better