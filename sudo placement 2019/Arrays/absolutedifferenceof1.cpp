/*
Given an array A of size N. Print all the numbers less than K in the array. The numbers should be such that the difference between every adjacent digit should be 1.

Note: Print '-1' if no number if valid.

Input:
The first line consists of an integer T i.e number of test cases. T testcases follow. Each testcase contains two lines of input. The first line consists of two integers N and K separated by a space. The next line consists of N spaced integers.

Output:
For each testcase, print the required output.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= K, A[i] <= 1018

Example:
Input:
2
8 54
7 98 56 43 45 23 12 8
10 1000
87 89 45 235 465 765 123 987 499 655

Output:
43 45 23 12
87 89 45 765 123 987

Explanation:
Testcase1: 43 45 23 12  all these numbers have adjacent digits diff as 1 and they are less than 54
*/
#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

int absdiff(int n)
{
    string str = to_string(n); //it will show error but it is correct online ide
    int len=str.length();
    int i =0;int check=0;
    while (i<len-1)
        {
          if(abs(str[i]-str[i+1])!=1)
          {
          check=1;
          break;
          }
        i++;
        }
    if(check==0){
        cout<<n<<" ";
    }
    else if(check==1){
            return 0;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=0,count2=0;
        for(int j=0;j<n;j++){
            if(arr[j]<k && arr[j]>10){
                count2++;
                if(absdiff(arr[j])==0){
                    count++;
                }
            }
            }
        if(count==count2){
            cout<<"-1 ";
        }
        cout<<"\n";
    }
    return 0;
    }
