#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=1;
    cin>>n;
    while(n>0){
        int digit = n%10;
        p = p*digit;
        n = n/10;
    }
    cout<<p<<" ";
}
