/* Given an array of 0's and 1's your task is to complete the function maxLen which returns size of the largest sub array with equal number of 0's and 1's. The function maxLen takes 2 arguments. The first argument is the array A[] and second argument is the size 'N' of the array A[].

Input:
The first line of the input is T denoting the number of test cases. Then T test cases follow . Each test case contains two lines. The first line of each test case is a number N denoting the size of the array and in the next line are N space separated values of A [].

Output:
For each test case output in a new line the max length of the subarray.

Constraints:
1 <= T <= 100
1 <= N <= 100
0 <= A[] <= 1

Example:
Input
2
4
0 1 0 1
5
0 0 1 0 0

Output
4
2

Explanation:
Testacase 1: The array from index [0...3] contains equal number of 0's and 1's. Thus maximum length of subarray having equal number of 0's and 1's is 4. */
#include<iostream>
using namespace std;

int maxLen(int arr[], int n)
{
    int sub_length=0,sum=0,max=0;
    for(int i=0;i<n-1;i++)
    {
        sum=0;
        sub_length=0;
        if(arr[i]==0)
        {
            sum = sum-1;
            sub_length++;
        }
        else if(arr[i]==1)
        {
            sum = sum+1;
            sub_length++;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==0)
            {
                sum = sum-1;
                sub_length++;
            }
            else if(arr[j]==1)
            {
            sum = sum+1;
            sub_length++;
            }
            if(sum==0)
            {
                if(sub_length>max)
                    max=sub_length;
            }
        }
    }
    return max;
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
        cout<<maxLen(a,n)<<endl;
    }
    return 0;
}
