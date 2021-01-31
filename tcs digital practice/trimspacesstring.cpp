#include<bits/stdc++.h>
using namespace std;

void trimSpaces(string input) {

    int i=0,j=0;
    while(input[i]!='\0')
    {
        if (input[i]!=' ')
        {
            input[j]=input[i];
            j++;
        }
        i++;
    }
    input[j]='\0';

    for(int k=0;k<j;k++)
    {
        cout<<input[k];
    }
}

int main()
{
    string input;
    getline (cin, input);
    trimSpaces(input);

    return 0;
}

