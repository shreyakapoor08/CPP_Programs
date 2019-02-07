#include<iostream>
using namespace std;

int main()
{
    int a=100;
    cout<< a <<endl;
    cout<< &a <<endl; ///gives the address of a
    // in &a '&' is unary address of operator
    //in a & b '&' is bitwise and
    //in case of arrays
    int b[100];

    ///all of these are same - address of b
    /*cout<< b <<endl;
    cout<< &b <<endl;
    cout<< &b[0] <<endl; */


    ///store the address of some variable
    int * ptr; ///create a pointer variable

    ptr = &a;

    cout<< ptr <<endl; // ptr is storing &a
    cout<< &a <<endl;
}
