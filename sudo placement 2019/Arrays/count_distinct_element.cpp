/*
Given an array A[] of size N and an integer K. Your task is to complete the function countDistinct() which prints the count of distinct numbers in all windows of size k in the array A[].

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers N and K. Then in the next line are N space separated values of the array A[].

Output:
For each test case in a new line print the space separated values denoting counts of distinct numbers in all windows of size k in the array A[].

Constraints:
1 <= T <= 100
1 <= N, K <= 100
1 <= A[] <= 100

Example(To be used only for expected output):
Input:
2
7 4
1 2 1 3 4 2 3
3 2
4 1 1

Output:
3 4 4 3
2 1

Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.
*/

#include<iostream>
using namespace std;



//count distinct element in window of size k
int countWindowDistinct(int win[],int k)
{
    int dist_count = 0;

    //traverse the window
    for(int i=0;i<k;i++)
    {
        //check if element arr[i] exists in arr[0..i-1]
        int j;
        for(j=0;j<i;j++)
            if(win[i] == win[j])
            break;
        if(j==i)
            dist_count++;
    }
    return dist_count;
}

void countDistinct(int arr[], int k, int n)
{
    //traverse through every window
    for(int i=0;i<=n-k;i++)
    {
        cout<<countWindowDistinct(arr+i,k)<<" ";
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        countDistinct(arr,k,n);
        cout<<endl;
    }
}
