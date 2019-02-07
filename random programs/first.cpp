#include<iostream>
using namespace std;

int main(){
    int no;
    cin>>no;

    while(no<0){
        cout<<no<<" ";

        cin>>no;
    }
    return 0;
}
