#include<iostream>
using namespace std;

int main()
{
    int x = 10;

    ///create a pointer variable (* is a part of syntax
    int *y;

    ///y contains address, *y will give the value
    y = &x;

    cout<< &x <<endl;
    cout<< y <<endl;
    cout<< &y <<endl;
    cout<< *y <<endl;

    cout<< &(*y) <<endl;
    cout<< *(&y) <<endl;
    /// cout<< &(*x) <<endl;
    cout<< *(&x) <<endl;

    cout<<  x + 1 <<endl;
    cout<< &x <<endl;
    cout<< y <<endl;
    cout<< &x + 1 <<endl;
    cout<< y + 1 <<endl;
    cout<< &y + 1 <<endl;

    int * z;

    z = 0;

    cout << *z <<endl; ///two things can happen
    ///garbage value or you will see segmentation fault


    return 0;
}
