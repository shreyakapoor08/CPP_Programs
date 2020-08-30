
#include <bits/stdc++.h>
using namespace std;



char* encodedChar(char* input1, int input2)
{
    int i, j;

    int n = strlen(input1);

    // To store length of substring
    int len;

    // To store length of substring when
    // it is repeated
    int num;

    // To store frequency of substring
    int freq;

    i = 0;

    while (i < n) {
        j = i;
        len = 0;
        freq = 0;

        // Find length of substring by
        // traversing the string until
        // no digit is found.
        while (j < n && isalpha(input1[j])) {
            j++;
            len++;
        }

        // Find frequency of preceding substring.
        while (j < n && isdigit(input1[j])) {
            freq = freq * 10 + (input1[j] - '0');
            j++;
        }

        // Find length of substring when
        // it is repeated.
        num = freq * len;

        // If length of repeated substring is less than


        if (input2 > num) {
            input2 -= num;
            i = j;
        }

        // If length of repeated substring is

        // character lies in current substring.
        else {
            input2--;
            input2 %= len;
            return input1[i + input2];
        }
    }


    return input1[input2 - 1];
}

// Driver Code
int main()
{
    char* input1 = "abced";
    int input2 = 4;

    cout << encodedChar(input1, input2) << endl;

    return 0;
}
