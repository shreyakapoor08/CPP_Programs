#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int i=0,j=0;
    while(str[i]!='\0'){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    for(int k=0;k<j;k++){
        cout<<str[k];
    }
}
