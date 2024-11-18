        //first i'm gonna write code to describe the solution

        //First we need to create a variable that will store the merged word

        // in the case of c++ we need to create variables that will store the lengths
        //of each variable in order to iterate through each string



        //iterate through each letter of the first word

            //for each iteration we check if there still exists a letter to add on
            //the second word

            //if so we add the letter from the first word
            //then the letter of the second word

            //if there isnt we add the letter of the first word

        //if there's still letters in the second word 
        //we append it to the end of the variable

    //code generated using the above instructions
    //still need to hand write it to learn the syntax

    //creating a variable with the std library allows 
    //dynamic memory allocation, so no deleting memory after we're done
    //has built in functions to concatenate the string and other things
    //so simplifies the problem solving with already created methods
    //rewritten to engrain syntax

class Solution {
    public:
        string mergeAlternately(string word1, string word2){
            std::string result;

            size_t length1 = word1.length1();
            size_t length2 = word2.length2();

            size_t i = 0, j = 0;

            while(i < length1){
                results += word1[i++];

                if(j < length2){
                    results += word2[j++];
                }
            }

            while(j < length2){
                results += word2[j++]
            }
            
            return result;
        }
}