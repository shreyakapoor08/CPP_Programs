#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Given a String -> if

    int t;
    cin>>t;
    string input;
    cin.get();
    while(t--)
    {

        getline(cin,input);
        int i=0,j=0;
        while(input[i]!='\0')
        {
            if(input[i]=='7')
            {

            }
            else if(input[i]=='5' && input[i+1]!='\0' && input[i+1]=='6' ) i++;
            else
            {

                input[j] = input[i];
                j++;
            }
            i++;
        }
        input[j] = '\0';
        input.resize(j+1);
        cout<<input<<"\n";

    }
}

