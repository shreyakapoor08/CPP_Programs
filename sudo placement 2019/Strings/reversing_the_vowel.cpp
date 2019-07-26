/*
Given a string, reverse only the vowels present in it and print the resulting string.

Input: First line of the input file contains an integer T denoting the number of test cases. Then T test cases follow. Each test case has a single line containing a string.

Output: Corresponding to each test case, output the string with vowels reversed.

Example:
Input:
4
geeksforgeeks
practice
wannacry
ransomware

Output:
geeksforgeeks
prectica
wannacry
rensamwora
*/

#include<iostream>
#include<string>
using namespace std;

//utility function to check for vowels
bool isVowel(char c)
{
    return (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U');
}

//Function to reverse order of vowels
string reverseVowel(string str)
{
    //start two indexes from two corners
    //and move towards each other
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        if(!isVowel(str[i]))
        {
            i++;
            continue;
        }
        if(!isVowel(str[j]))
        {
            j--;
            continue;
        }

        //swapping
        swap(str[i],str[j]);

        i++;
        j--;
    }
    return str;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        cout<<reverseVowel(str);
        cout<<endl;
    }
    return 0;
}
