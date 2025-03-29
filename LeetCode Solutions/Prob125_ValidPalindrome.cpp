
'''
two steps:
first clean the string ie remove the characters and spaces using isalnum aand tolower
second compare using two pointers
'''

class Solution {
    public:
        bool isPalindrome(string s) {
            string cleaned;
            for(char c : s){
                if(isalnum(c)){
                    cleaned += tolower(c);
                }
            }
            int left=0, right = cleaned.length()-1;
            while(left < right){
                if(cleaned[left] != cleaned[right]){
                    return false;
                }
                left++;
                right--;
            }
            return true; 
        }
    };