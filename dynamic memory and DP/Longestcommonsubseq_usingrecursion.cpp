#include<iostream>
#include<cstring>
using namespace std;

int lcs(string s1,string s2,int i,int j)
{
    if(i==0||j==0)
    {
        return 0;
    }

    if(s1[i-1]==s2[j-1])
    {
        return 1 + lcs(s1,s2,i-1,j-1);
    }
    return max(lcs(s1,s2,i,j-1),lcs(s1,s2,i-1,j));
}

int main()
{
    string s1 = "Apple";
    string s2 = "mApen";

    int i = s1.length();
    int j = s2.length();

    cout<<lcs(s1,s2,i,j);

    return 0;
}
