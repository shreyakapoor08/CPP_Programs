#include<iostream>
using namespace std;

int count(int S[],int m,int n)
{
    int i,j,x,y;

    //we need n+1 rows as the table
    //is constructed in bottom up manner
    //using the base case 0
    //value case (n=0)
    int table[n+1][m];

    //fill the entries for 0
    //value case (n=0)
    for(int i=0;i<m;i++)
        table[0][i] = 1;

    //fill rest of the table entries
    //in bottom up manner
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<m;j++)
        {
            //count of solutions including S[j]
            x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0;

            //count of solutions excluding S[j]
            y = (j >= 1) ? table[i][j-1] : 0;

            //total count
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}

int main()
{
    int arr[] = {1,2,3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    cout<<count(arr,m,n);
    return 0;
}
