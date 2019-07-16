#include<iostream>
using namespace std;

int coinWays(int amt,int coins[],int n)
{
    //base case
    if(amt==0)
    {
        return 1;
    }
    //rec case
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(amt-coins[i]>=0)
        {
            ans += coinWays(amt - coins[i],coins,n);
        }

    }
    return ans;
}

int main()
{
    int coins[] = {1,7,10};
    int amt = 15;
    cout<<coinWays(amt,coins,3);

return 0;
}
