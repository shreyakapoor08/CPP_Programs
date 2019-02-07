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
    for(int i=0;i<=t;i++){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
}
