/*
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is r and c, r is the number of rows and c is the number of columns.
The second line of each test case contains all the elements of the matrix in a single line separated by a single space.

Output:
Print the modified array.

Constraints:
1 ≤ T ≤ 100
1 ≤ r, c ≤ 1000
0 ≤ A[i][j] ≤ 1

Example:
Input:
3
2 2
1 0
0 0
2 3
0 0 0
0 0 1
4 3
1 0 0
1 0 0
1 0 0
0 0 0

Output:
1 1
1 0
0 0 1
1 1 1
1 1 1
1 1 1
1 0 0

Explanation:
Testcase1: Since only first element of matrix has 1 (at index 1,1) as value, so first row and first column are modified to 1.

*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int ar[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            if(ar[i][j]==1)
            {
                ar[0][j]=1;
                ar[i][0]=1;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ar[0][j]==1 || ar[i][0]==1)
                {
                    cout<<1<<" ";
                }
                else
                    cout<<0<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
