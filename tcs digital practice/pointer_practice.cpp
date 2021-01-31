#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *x = &a;
    int *y = &x;

    cout<<"a "<<a<<endl;
    cout<<"x "<<x<<endl;
    cout<<"*x "<<*x<<endl;
    cout<<"&a "<<&a<<endl;
    cout<<"*y "<<*y<<endl;
    cout<<"&x "<<&x<<endl;
    return 0;
}
