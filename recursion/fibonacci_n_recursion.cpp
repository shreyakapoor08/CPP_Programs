#include<iostream>
using namespace std;

int fib(int n)
{
    ///Base case
    if(n==0||n==1)
    {
        return n;
    }


    int f1 = fib(n-1);
    int f2 = fib(n-2);
    return f1+f2;
}

int main()
{
    cout<<fib(4)<<endl;  //output=3 as 4th fibonacci number is 3

    return 0;
}
