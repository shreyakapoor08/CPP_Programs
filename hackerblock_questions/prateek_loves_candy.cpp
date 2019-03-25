#include<iostream>
using namespace std;

bool isPrime(int n) {
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}

///Lets define a array
int primes[1000005]={0};

void generatePrimes(int range){
    primes[0]=2;
    int k=1;
    ///Iterating over only odd places
    ///All evens are not primes
    for(int i=3;i<=range;i = i+2){
        if(isPrime(i)){
            primes[k] = i;
            k++;
        }
    }
}
int main(){

    int range = 1000000;
    ///Precomputation
    generatePrimes(range);

    int t;
    cin>>t;

    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
}

/*
PRATEEK LOVES CANDY
Prateek recently graduated from college. To celebrate, he went to a candy shop and bought all the candies. The total cost was a number upto which there are n prime numbers (starting from 2). Since Prateek wants to minimize his cost, he calls you to help him find the minimum amount that needs to be paid. Being a student of Prateek bhaiya it is now your job to help him out :)

Input Format:
First line contains a single integer denoting the number of test cases T. Next T lines contains a single integer N, denoting the number of primes required.

Constraints:
T <= 10000

It is guaranteed that the answer does not exceed 10^6.

Output Format
Print the minimum cost that needs to be paid.

Sample Input
2
5
1
Sample Output
11
2
*/
