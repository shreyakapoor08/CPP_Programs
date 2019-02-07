#include<iostream>
using namespace std;

int computePower(int x,int y)
{
    ///base case
    if(y==0)
    {
        return 1;
    }
    ///rec case
    else{
        return (x*computePower(x,y-1));
    }
}
int fastPower(int x,int y)
{
    if(y==0)
    {
        return 1;
    }

    int halfPower = fastPower(x,y/2);
    halfPower *= halfPower;

    if(y&1)   ///if odd
    {
        return x*halfPower;
    }
    return halfPower;   ///if even
}

int main()
{   int x,y;
    cin>>x>>y;
    int answer;
    answer = computePower(x,y);
    cout<<"the power computed is "<<answer;
    cout<<fastPower(3,5) <<endl;

    return 0;
}
