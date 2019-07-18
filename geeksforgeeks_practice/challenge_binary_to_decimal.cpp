#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int ans = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    while (num) {
        int last_digit = num % 10;
        ans += last_digit * base;
        base = base * 2;
        num = num / 10;
    }

    return ans;
}
// Driver program to test above function
int main()
{
    int num;
    cin>>num;
    cout << binaryToDecimal(num) << endl;
}

/*
BINARY TO DECIMAL
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
*/
