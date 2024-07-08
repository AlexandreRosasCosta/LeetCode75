#include <string>

using std::string;

class Solution {
public:
    string mergeAlternately(string word1, string word2);    
};

string Solution::mergeAlternately(string word1, string word2) {
    string merged;
    int lengthWord1 = word1.length();
    int lengthWord2 = word2.length();
    if((lengthWord1>=1 && lengthWord1 <= 100) && (lengthWord2 >=1 && lengthWord2 <= 100)){
        int i = 0, j = 0;
        while(i < lengthWord1 || j < lengthWord2){
            if(i<lengthWord1){
                merged += word1[i];
                i++;
            }
            if(j<lengthWord2){
                merged += word2[j];
                j++;
            }
        }    
        return merged;                  
    }else{
        return "Wrong!";
    }
}