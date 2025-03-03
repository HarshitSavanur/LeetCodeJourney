//Similar to reverseNum only store the array elswwhere for comparision
//9.Palindrome
class Solution {
    public:
        bool isPalindrome(int x) {
            if (x<0){
                return false;
            }
            int dup = x;
            int revNum = 0;
            int lastDig;
            while(x!=0){
                lastDig = x % 10;
                if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && lastDig > 7)) return 0;
                if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && lastDig < -8)) return 0;
                revNum = (revNum * 10) + lastDig;
                x=x/10;
            }
            if(revNum==dup){
                return true;
            }
            else{
                return false;
            }
            }
    };