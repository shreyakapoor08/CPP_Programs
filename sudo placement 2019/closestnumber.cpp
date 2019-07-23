/*
Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the closest number in new line.

Constraints:
1<=T<=100
1<=N<=105
1<=K<=105
1<=A[i]<=105

Example:
Input:
2
4 4
1 3 6 7
7 4
1 2 3 5 6 8 9

Output:
3
5
*/

#include<iostream>
using namespace std;

int getClosest(int val1,int val2, int k)
{
    if(k - val1 >= val2 - k)
        return val2;
    else
        return val1;
}

//returns element closest to k in arr[]
int findClosest(int arr[],int n,int k)
{
    //corner cases
    if(k <= arr[0])
        return arr[0];
    if(k >= arr[n-1])
        return arr[n-1];

    //doing binary search
    int i=0,j=n,mid=0;
    while(i<j)
    {
        mid = (i+j)/2;

        if(arr[mid] == k)
            return arr[mid];

        //if k is less than array element then search in left
        if(k < arr[mid])
        {
            //if k is greater than previous to mid
            //return closest of two
            if(mid>0 && k > arr[mid - 1])
                return getClosest(arr[mid - 1], arr[mid],k);

            //repeat for left half
            j = mid;
        }

        //if k is greater than mid
        else{
            if(mid < n-1 && k < arr[mid + 1])
                return getClosest(arr[mid], arr[mid+1],k);

            //update i
            i = mid + 1;

        }
    }

    //only single element left after search
    return arr[mid];
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
        {
            cin>>arr[i];
        }
        cout<<(findClosest(arr,n,k));
        cout<<endl;

    }

    return 0;
}
