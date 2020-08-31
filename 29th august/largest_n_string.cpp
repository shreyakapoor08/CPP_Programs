#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char currentString[1000];
    char largestString[1000];
    int len = 0, largestLen = 0;
    cin.get(); ///consumes the extra '\n' from the input buffer
    for(int i=1;i<=n;i++)
    {
        cin.getline(currentString,1000);
        len = strlen(currentString); /// strlen is inbuild function
        if(len>largestLen)
        {
            largestLen = len;
            /// strcpy fn which copies one string to another
            strcpy(largestString,currentString);
        }
    }
    ///Loop end - largest string
    cout<<"Largest string is "<<largestString<<endl;
    cout<<"Len is "<< largestLen<<endl;

    return 0;

}
