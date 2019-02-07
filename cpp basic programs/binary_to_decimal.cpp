#include<iostream>
using namespace std;

int main(){
 int no;
 cin>>no;
 int p=1,ans=0;
 while(no>0){
    int last_digit = no%10;
    ans = ans + last_digit*p;
    p=p*2;
    no = no/10;
 }
 cout<<ans;
 return 0;
}
