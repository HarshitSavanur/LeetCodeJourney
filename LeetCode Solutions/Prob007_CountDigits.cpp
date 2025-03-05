'''Given a positive integer n, count the number of digits in n that divide n evenly 
(i.e., without leaving a remainder). Return the total number of such digits.

A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
Digits of n should be checked individually. If a digit is 0, it should be ignored because
 division by 0 is undefined.
'''
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Step 1: Extract last digit using remainder like 89%10=9 last digit extraction
//Step 2: Divide the number by 10 to remove the last digit
//Step 3: If digit is not 0 and 
class Solution{
    public:
    int evenlyDivides(int n){
        int original = n;
        int cnt = 0;
        
        while(n>0){
        int digit = n % 10;
        n= n / 10;
        
        if(digit!=0 && original % digit ==0){
            cnt ++;
        }
    }
    return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends