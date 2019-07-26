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
    while(i<n-1 && a[i] <= a[i+1])
        i++;

    //if i reaches to last index that means
    //all the elements are in increasing order
    if(i == n-1)
    {
        cout<<a[n-1]<<" 1"<<endl;
        return;
    }

    //if first element is greater than next one
    if(i == 0)
    {
        while(i < n-1 && a[i] >= a[i+1])
            i++;

        //if i reaches to last index
        if(i == n-1)
        {
            cout<<a[0]<<" 2"<<endl;
            return;
        }

        //if the whole array is not in decreasing order
        //that means it is first decreasing then increasing
        //i.e descending roatied, so its max
        //element will be the point breaking the order ie. i so,
        //max will be i + 1
        if(a[0] < a[i+1])
        {
            cout<<max(a[0], a[i+1])<<" 3"<<endl;
            return;
        }
        else
        {
            cout<<max(a[0],a[i+1])<<" 4"<<endl;
            return;
        }
    }

    //if whole array is not increasing that means at some
    //point it is decreasing, which makes it ascending rotated
    //with max element as the  descending point
    if(i < n-1 && a[0] > a[i+1])
    {
        cout<<max(a[i], a[0])<<" 4"<<endl;
        return;
    }

    cout<<max(a[i],a[0])<<" 3"<<endl;

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
