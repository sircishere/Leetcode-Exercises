class Solution {
public:
    string reverseVowels(string s) {
        //iterate through the string, take out the vocals
        //their indexes and put them in an array
        //once the proccess is finished
        //iterate through the indexes in reverse
        //and place the vocals in first to last order
        //in order to reverse the vocals correctly
        //worked but its horrible in terms of memory
        //very speed efficient

        int length = s.length();
        string result = "";
        std::vector<int> indexes;
        std::vector<char> vocals = {'a','e','i','o','u','A','E','I','O','U'};


        for(int i = 0;i < length; i++){
            for(int j = 0; j < 10; j++){
                    if(s[i] == vocals[j]){
                        result += s[i];
                        indexes.push_back(i);
                        break;
                    }
                }
            }

        for(int i = 0; i < indexes.size(); i++){
            s[indexes[i]] = result.back();
            result.pop_back();
        }

        return s;


        }
};







