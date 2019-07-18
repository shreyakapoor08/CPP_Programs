#include <iostream>
using namespace std;

int counterdigit(int n, int d)
{

    int ans = 0;

    while (n > 0) {


        if (n % 10 == d)
            ans++;
        // reduce the number
        n = n / 10;
    }

    return ans;
}


int main()
{


    int N;
    cin>>N;
    int D;
    cin>>D;
    cout<<counterdigit(N,D);

    return 0;
}

/*
COUNT DIGITS
Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.

Input Format:
Integer (A number) Integer (A digit)

Constraints:
0 <= N <= 1000000000 0 <= Digit <= 9

Output Format
Integer (count of times digit occurs in the number)

Sample Input
5433231
3
Sample Output
3
*/


