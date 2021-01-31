//Sexy Primes are prime numbers that differ from each other by six
#include <bits/stdc++.h>
using namespace std;

void sexyprime(int l, int r)
{
    bool prime[r + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= r; p++) {

        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true) {

            // Update all multiples of p
            for (int i = p * p; i <= r; i += p)
                prime[i] = false;
        }
    }
    // From L to R - 6, checking if i,
    // i + 6 are prime or not.
    for (int i = l; i <= r - 6; i++)
        if (prime[i] && prime[i + 6])
            cout << "(" << i << ", "
                 << i + 6 << ") ";

}
int main()
{
    int L = 6, R = 59;
    sexyprime(L, R);
    return 0;
}
