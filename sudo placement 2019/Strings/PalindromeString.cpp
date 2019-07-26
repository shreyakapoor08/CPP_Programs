/*
Given a string S, check if it is palindrome or not.

Input:
The first line contains 'T' denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line contains the length of the string and the second line contains the string S.

Output:
For each testcase, in a new line, print "Yes" if it is a palindrome else "No". (Without the double quotes)

Constraints:
1 <= T <= 30
1 <= N <= 100

Example:
Input:
1
4
abba
Output:
Yes
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        char string1[n];
        int flag = 0;
        cin>>string1;
        for(int i=0; i<n;i++)
        {
            if(string1[i] != string1[n-i-1])
            {
                flag=1;
                break;
            }
        }

        if(flag)
        {
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
        cout<<endl;
    }
    return 0;
}
