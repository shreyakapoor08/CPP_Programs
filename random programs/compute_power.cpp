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

int main()
{   int x,y;
    cin>>x>>y;
    int answer;
    answer = computePower(x,y);
    cout<<"the power computed is "<<answer;
}
