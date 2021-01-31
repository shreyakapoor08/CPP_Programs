//time limit exceed
#include<bits/stdc++.h>
using namespace std;

/*int gcd(long long  i,long long n){
    if (i == 0)
       return n;
    if (n == 0)
       return i;

    // base case
    if (i == n)
        return i;

    // a is greater
    if (i > n)
        return gcd(i-n, n);
    return gcd(i, n-i);
}
*/
void func(long long n)
{
	// Write your code here
    long long sum = 0;
    long long lcm = 0;
    for(long long i=1;i<=n;i++){
        int temp = 0;
        temp = __gcd(i,n);
        lcm = (i*n)/temp;
        sum = sum+lcm;

    }
    cout<<sum;
}

int main()
{
    long long n;
    cin>>n;
    func(n);
}
