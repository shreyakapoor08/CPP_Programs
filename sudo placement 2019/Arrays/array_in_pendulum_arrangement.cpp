/*
Write a program to input a list of n integers in an array and arrange them in a way similar to the to-and-fro movement of a Pendulum.

The minimum element out of the list of integers, must come in center position of array. If there are even elements, then minimum element should be moved to (n-1)/2 index (considering that indexes start from 0)
The next number (next to minimum) in the ascending order, goes to the right, the next to next number goes to the left of minimum number and it continues like a Pendulum.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. Then next line contains N space separated integers forming the array.

Output:
Output the array in Pendulum Arrangement.

Constraints:
1<=T<=500
1<=N<=100
1<=a[i]<=1000

Example:
Input:
2
5
1 3 2 5 4
5
11 12 31 14 5

Output:
5 3 1 2 4
31 12 5 11 14
*/

#include<iostream>
#include<algorithm>
using namespace std;

void pendulumArrangement(int arr[],int n)
{
    //sorting the elements
    sort(arr, arr+n);

    //auxiliary array to store output
    int op[n];

    //calculating the middle index
    int mid = (n-1)/2;

    //storing the minimum element in the middle
    //i is index for output array and j is for input array
    int j=1,i=1;
    op[mid] = arr[0];
    for(i=1;i<=mid;i++)
    {
        op[mid+i] = arr[j++];
        op[mid-i] = arr[j++];
    }

    //adjustment for when no. of elements is even
    if(n%2 == 0)
    {
        op[mid+i] = arr[j];
    }

    //printing the pendulum arrangement
    for(int i=0;i<n;i++)
        cout<<op[i]<<" ";
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        pendulumArrangement(arr,n);
        cout<<endl;
    }
    return 0;
}
