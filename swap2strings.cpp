#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i=0,j=0;
    char str1[20],str2[20],temp[20];
    gets(str1);
    gets(str2);
    while(str1[i]!='\0')
    {
        temp[j]=str1[i];
        i++;
        j++;
    }
    temp[j]='\0';
    i=0;j=0;
    while(str2[i]!='\0')
    {
        str1[j]=str2[i];
        i++;
        j++;
    }
    str1[j]='\0';
    i=0,j=0;
    while(temp[i]!='\0')
    {
        str2[j]=temp[i];
        i++;
        j++;
    }
    str2[j]='\0';
    cout<<str1<<endl;
    cout<<str2;
    return 0;
}
