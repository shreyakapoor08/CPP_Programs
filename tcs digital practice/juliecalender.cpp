#include<bits/stdc++.h>
using namespace std;


int main() {

 int n;
 cin>>n;
 if(n==1918)
 cout<<"26.09.1918";
 else if(n==1700 || n==1800 || n==1900)
 cout<<"12.09."<<n;
 else if(n%400==0)
 cout<<"12.09."<<n;

 else if(n%4==0)
 {
 if(n%100==0)
 cout<<"13.09."<<n;

 else
 cout<<"12.09."<<n;

 }
 else
 cout<<"13.09."<<n;;
 return 0;
}
