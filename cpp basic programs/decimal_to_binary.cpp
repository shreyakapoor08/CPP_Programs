#include<iostream>
using namespace std;

int main(){
int no;
cin>>no;
while(no>0){
    int rem=no%2;
    cout<<rem;
    no=no/2;
}
return 0;
}
