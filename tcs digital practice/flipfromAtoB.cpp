/*
1. Calculate XOR of A and B.
        a_xor_b = A ^ B
  2. Count the set bits in the above
     calculated XOR result.
        countSetBits(a_xor_b)
        */

// Count number of bits to be flipped
// to convert A into B
#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n &= (n-1);
    }
    return count;
}

int FlippedCount(int a, int b)
{
    return countSetBits(a^b);
}

// Driver code
int main()
{
    int a = 10;
    int b = 20;
    cout << FlippedCount(a, b)<<endl;
    return 0;
}
