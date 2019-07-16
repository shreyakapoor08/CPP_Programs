#include<iostream>
#include<cstring>
using namespace std;

int dp[100][100];
int maxPrice(int *wines,int i,int j,int day)
{
    ///base case
    if(i>j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    /// rec case
    int op1 = wines[i]*day + maxPrice(wines,i+1,j,day+1);
    int op2 = wines[j]*day + maxPrice(wines,i,j-1,day+1);
    dp[i][j] = max(op1,op2);
    return dp[i][j];
}

int main()
{

    memset(dp,-1,sizeof(dp)); ///initializing using memset iski header file hoti hai cstring
    int wines[] = {2,3,5,1,4};
    int n = 5;
    cout<<maxPrice(wines,0,n-1,1);

    return 0;
}

