'''
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Write a program to test whether a given number is an Armstrong number or not.

Input Format

First line consists of an integer T which is the number of testcases.And then there will be T line-separated numbers each line consisting of a single integer N.

Constraints

1 < N < 999

Output Format

T number of line separted strings,each line consisting of a string "Yes",if N is an armstrong number and "No",if N isnt an armstrong number.

Sample Input

3
345
1
0

Sample Output

No
Yes
Yes

Explanation

3^3 + 4^3 + 5^3 is not equal to 345.Hence 345 isnt an armstrong number. 1^3 = 1.Hence 1 is an armstrong number. 0^3 = 0.Hence 0 is an armstrong number.
'''
//Step 1 : Extract the Numbers from the digit 
//Step 2 : Find the cube of extract and store in sum
//Step 3 : compare

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int dup = n;
    int sum = 0;
    while(n>0){  
    int num = n % 10;
    sum = sum + (num * num * num);
    n=n/10;
    }
    if(sum==dup){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}
