#include<iostream>
using namespace std;

int main(){
int no;
cin>>no;
int i=2;
while(i<no-1){
    if(no%i==0){
        cout<<"NOT PRIME";
        return 0;
    }
    i=i+1;
}
cout<<no<<" IS PRIME";
return 0;
}
