/*
Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. The next line contains N space separated values of the array.

Output:
For each test case in a new line print the space separated values of the modified array.

Constraints:
1 <= T <= 103
1 <= N <= 107
0 <= Ai <= 1018

Example:
Input:
2
7
1 2 3 5 4 7 10
7
0 4 5 3 7 2 1

Output:
7 5 3 1 2 4 10
7 5 3 1 0 2 4

Explanation:
Testcase1: Array elements 7 5 3 1 are odd and sorted in descending order, whereas 2 4 10 are even numbers and sorted in ascending order.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool mycompare(int a,int b)
{
    return a>b;
}

void twoWaySort(int arr[],int n)
{
    //current index from left to right
    int l=0,r=n-1;

    //count of odd numbers
    int k=0;

    while(l<r)
    {
        //find first off numbers from left side
        while(arr[l]%2 != 0)
        {
            l++;
            k++;
        }

        //find first even number from right side
        while(arr[r]%2 == 0 && l<r)
            r--;

        //swap odd number present on left and even number right
        if(l < r)
            swap(arr[l],arr[r]);
    }

    //sort odd number in descending order
    sort(arr, arr+k, mycompare);

    //sort even number in ascending order
    sort(arr+k, arr+n);
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
        twoWaySort(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

    return 0;
}
