/*
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

Input:
The first line contains T, denoting the number of testcases. Then follows description of testcases. Each case begins with a single positive integer N denoting the size of array. The second line contains the N space separated positive integers denoting the elements of array A.

Output:
For each testcase, print "Yes" or  "No" whether it is Pythagorean Triplet or not (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= A[i] <= 1000

Example:
Input:
1
5
3 2 4 6 5

Output:
Yes

Explanation:
Testcase 1: a=3, b=4, and c=5 forms a pythagorean triplet, so we print "Yes"
*/

#include<iostream>
#include<algorithm>
using namespace std;

//function that returns true if there is a triplet
bool isTriplet(int arr[], int n)
{
   //square array elements
   for(int i=0;i<n;i++)
    arr[i] = arr[i] * arr[i];

   //sort array element
   sort(arr, arr+n);

   //now fix one element one by one and find the other two elements
   for(int i=n-1;i>=2;i--)
   {
       //to find the other two elements, start two index
       //variables from two corners of the array and move
       //them towards each other
       int l = 0; //index of first element in arr[0...i-1]
       int r = i-1; //index of last element in 0...i-1
       while(l<r)
       {
           //a triplet found
           if(arr[l] + arr[r] == arr[i])
            return true;

           //else either move 'l' or 'r'
           (arr[l] + arr[r] < arr[i]) ? l++ : r--;
       }
   }

   //if we reach here, then no triplet found
   return false;
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
        isTriplet(arr,n) ? cout<< "Yes" : cout <<"No";
        cout<<endl;
    }

    return 0;
}
