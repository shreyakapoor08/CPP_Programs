/*
Given a string S. The task is to print all permutations of a given string.

Input:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Constraints:
1 ≤ T ≤ 10
1 ≤ size of string ≤ 5

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA
*/

//using backtracking
#include<iostream>
using namespace std;

//function to find all permutations of a given string str[i...n-1]
//containing all distinct characters
void permutations(string str,int i,int n)
{
    //base case
    if(i == n-1)
    {
        cout<<str<<" ";
        return;
    }

    //process each character of the remaining string
    for(int j=i;j<n;j++)
    {
        //swap character at index i with current character
        swap(str[i],str[j]);

        //recur for string [i+1, n-1]
        permutations(str,i+1,n);

        //backtrack (restore the string to its original state
                     swap(str[i],str[j]);
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        permutations(str,0,str.length());
        cout<<endl;
    }
    return 0;
}
