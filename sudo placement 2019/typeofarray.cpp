/*
You are given an array of size N having no duplicate elements. The array can be categorized into following:
1.  Ascending
2.  Descending
3.  Descending Rotated
4.  Ascending Rotated
Your task is to print which type of array it is and the maximum element of that array.

Input:
The first line of input contains an integer T denoting the no test cases. Then T test caes follow. Each testcase contains two lines of input. The first line contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

Output:
For each test case, print the largest element in the array and and integer x denoting the type of the array.

Constraints:
1 <= T <= 100
3 <= N <= 107
1 <= A[] <= 1018

Example:
Input:
2
5
2 1 5 4 3
5
3 4 5 1 2

Output:
5 3
5 4

Explanation:
Testcase1:
Input : A[] = { 2, 1, 5, 4, 3}
Output : Descending rotated with maximum element 5
Testcase2:
Input : A[] = { 3, 4, 5, 1, 2}
Output : Ascending rotated with maximum element 5
*/

#include<iostream>
using namespace std;

void findType(int a[],int n)
{
    int i=0;

    //check if the array is in ascending order
    while(i<n-1 && a[
          ])
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        findType(a,n);
    }
}
