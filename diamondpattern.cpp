#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;
    int space = rows-1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        space--;
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    space = 1;
    for(int i=1;i<=(rows-1);i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        space++;
        for(int j=1;j<=(2*(rows-i)-1);j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
