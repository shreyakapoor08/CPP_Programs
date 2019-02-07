#include<iostream>
using namespace std;

void printInc(int n)
{
    if(n==0)
    {
        return;
    }
    printInc(n-1);
    cout<<n<<" ";
    return;
}

void printDec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printDec(n-1);
    return;
}

int main()
{
    printDec(5);
    cout<<endl;
    printInc(5);

    return 0;
}
