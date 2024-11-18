class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // verifiy if the current ones in the vector
        // plus the ones that will be added
        // are less than half of the total size of the vector
        // if so return true else return false
        // it doesnt work since i have to iterate through the array
        // to check the specific arrangement and see if its possible

        if (n == 0) {
            return true;
        }

        int length = flowerbed.size();

        for (size_t i = 0; i < length; i++) {
            if (i == 0 && flowerbed[i] == 0 &&
                (i + 1 >= length || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                n--;
            } else if (i == length - 1 && flowerbed[i] == 0 &&
                       flowerbed[i - 1] == 0) {
                flowerbed[i] = 1;
                n--;
            } else if (i > 0 && i < length - 1 && flowerbed[i] == 0 &&
                       flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                // i forgot to add a flower to avoid counting the same spot
                // again
                n--;
            }

            if (n == 0) {
                return true;
            }
        }

        return n == 0;
    }
};