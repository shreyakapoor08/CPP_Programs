#include<iostream>
using namespace std;

void fun(int *y){
    y = y+1;
    cout<<y <<endl;
}

int main()
{
    int x = 10;

    cout<<&x<<endl;
    fun(&x); /// address are passed by value so a copy of the address is passed
    cout<<&x <<endl;
    cout<<x<<endl;
}
