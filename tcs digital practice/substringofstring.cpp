// CPP program to illustrate substr()
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{

    string s = "dog:cat";
    int pos = s.find(":");
    string sub = s.substr(pos + 1);
    cout << "String is: " << sub;
cout<<endl;

    string s1 = "Geeks";
    string r = s1.substr(1, 3);
    cout << "String is: " << r;
    cout<<endl;

    string str = "abc";
    int k=str.length();
    for(int i=0;i<k;i++)
    {
        for(int j=i;j<k;j++)
        {
            for(int l=i;l<=j;l++)
            {
                cout<<str[l];
            }
            cout<<endl;
        }
    }
    return 0;
}
