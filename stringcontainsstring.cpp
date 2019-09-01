#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string firststring,secondstring;
    getline(cin,firststring);
    getline(cin,secondstring);

    if(secondstring.size() > firststring.size())
        cout<<"NO";

    for(int i=0;i<firststring.size(); i++){
        int j=0;
        //if first character matches
        if(firststring[i] == secondstring[j]){
            int k=i;
            while(firststring[i] == secondstring[j] && j<secondstring.size())
            {
                j++;
                i++;
            }
            if(j == secondstring.size())
                cout<<"yes";
            else //reinitialize i to its original value
                i = k;

        }
    }
    cout<<"No";
}
