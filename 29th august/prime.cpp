#include<iostream>
using namespace std;

bool isPrime(int n)
{
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
   }
   return true;
}

void printPrime(int range)
{
    for(int i=2;i<=range;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;

    /* if(isPrime(n))
    {
        cout<<"No is prime";
    }
    else
    {
        cout<<"No is not prime";
    } */

    printPrime(n);

}
