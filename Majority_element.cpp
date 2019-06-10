/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Input:
The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.

Output:
For each test case the output will be the majority element of the array. Output "-1" if no majority element is there in the array.

Constraints:
1 <= T<= 100
1 <= N <= 107
0 <= Ai <= 106

Example:
Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1
*/


#include<iostream>
using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int count=1;
	    int majority=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]!=majority){
	             count--;
	             //cout<<count<<"count";
	            if(count==0)
	               {
	                   majority=arr[i];
                       count=1;
	               }
	            }
	         else if(arr[i]==majority)
	         count++;
	    }
	    int inc=0;
	    for(int i=0;i<n;i++)
	    {
	        if(majority==arr[i])
	          inc++;
	    }
	    //cout<<majority;
	    if(inc>(n/2))
	      cout<<majority<<endl;
	      else
	      cout<<"-1"<<endl;

	}
    return 0;
}
