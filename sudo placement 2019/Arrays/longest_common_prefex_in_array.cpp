/*
Given a array of N strings, find the longest common prefix among all strings present in the array.

Input:
The first line of the input contains an integer T which denotes the number of test cases to follow. Each test case contains an integer N. Next line has space separated N strings.

Output:
Print the longest common prefix as a string in the given array. If no such prefix exists print "-1"(without quotes).

Constraints:
1 <= T <= 103
1 <= N <= 103
1 <= |S| <= 103

Example:
Input:
2
4
geeksforgeeks geeks geek geezer
3
apple ape april

Output:
gee
ap

Explanation:
Testcase 1: Longest common prefix in all the given string is gee.
*/

#include<iostream>
#include<string>
using namespace std;

// A Utility Function to find the common prefix between
// strings- str1 and str2
string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();

    // Compare str1 and str2
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }

    return (result);
}

// A Function that returns the longest common prefix
// from the array of strings
string commonPrefix (string arr[], int n)
{
    string prefix =  arr[0];

    for (int i=1; i<=n-1; i++)
        prefix = commonPrefixUtil(prefix, arr[i]);

    return (prefix);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
     int n;
     cin>>n;
     string arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     string ans = commonPrefix(arr, n);

     if(ans.length())
        cout<<ans.c_str();

     else
        cout<<"-1";
    cout<<endl;
    }

    return 0;
}




