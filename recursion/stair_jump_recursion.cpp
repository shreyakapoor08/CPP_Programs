#include<iostream>
using namespace std;


///k = 3
int ways(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    return ways(n-1) + ways(n-2) + ways(n-3);
}

int waysnk(int n,int k)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    int ans = 0;
    for(int i=1;i<=k;i++)
    {
        ans += waysnk(n-i,k);
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<"for k=3: "<<ways(4)<<endl;
    cout<<waysnk(n,k)<<endl;

    return 0;
}
