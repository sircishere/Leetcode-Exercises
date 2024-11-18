class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // iterate through each item in the array
        // store the highest number in a variable
        // compare each item in the array with the highest number
        // and store it in a newly created array

        int biggest = 0;
        size_t length = candies.size();
        // initialization in c++ requires a fixed size known at compile time
        //

        std::vector<bool> result(length);

        // Find the maximum value in `candies`
        for (size_t i = 0; i < length; ++i) {
            if (candies[i] > biggest) {
                biggest = candies[i];
            }
        }

        for (size_t i = 0; i < length; ++i) {
            result[i] = (candies[i] + extraCandies >= biggest);
        }

        //the storing and comparing aspect is done at the same time to 
        //make the code look neater instead of initially using if else

        return result;
    }
};