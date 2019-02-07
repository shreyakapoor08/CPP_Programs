#include<iostream>
#include<cstring>
using namespace std;


bool isPermuation(char *a,char *b)
{
    int freq[26] = {0};
    for(int i=0;a[i]!='\0';i++)
    {
        freq[a[i] - 'a']++;
    }
    for(int i=0;b[i]!='\0';i++)
    {
        freq[b[i] - 'a']--;
    }
    ///check for all zeroes
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);

    if(isPermuation(a,b))
    {
        cout<<"Hai";
    }
    else
    {
        cout<<"Nahi hai";
    }

}
