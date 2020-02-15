#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{

    char str[100];
    int freq[26];
    cout<<"Enter the string: ";
    gets(str);

    int len = strlen(str);
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<len;i++){
            if(str[i]>='a' && str[i]<='z'){
                freq[str[i]-97]++;
            }

    }

    for(int i=0;i<26;i++){
        if(freq[i] !=0)
        {
            cout<<str[i]+97<<" "<<freq[i];
        }
    }
    return 0;
}
