#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    string s,t;
    cin>>s>>t;
    int flag = 0;
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]==t[j])
        {
            //cout<<s[i]<<endl;
            i++;
            j++;
        if(t[j]=='\0')
            {
                flag = 1;
                cout<<i-j;
            }
            continue;
        }
        i++;
    }
    if(flag == 0){
        cout<<"-1";
    }


    return 0;
} */

int main()
{
    string str = "geeksforgeeks a computer science";
    string str1 = "geeks";

    // Find first occurrence of "geeks"
    int found = str.find(str1);
    if (found != string::npos)
        cout << "First occurrence is " << found << endl;

    // Find next occurrence of "geeks". Note here we pass
    // "geeks" as C style string.
    string arr = "geeks";
    found = str.find(arr, found+1);
    if (found != string::npos)
        cout << "Next occurrence is " << found << endl;

    return 0;
}
