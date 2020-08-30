#include<iostream>
#include<cstring>
using namespace std;

void printSubstring(char *a)
{
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=i;a[j]!='\0';j++)
        {
            ///print all possible values [harr ek i se harr ek j tk]
            for(int k=i;k<=j;k++)
            {
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}

int main()
{
    char a[100];
    cin.getline(a,100);

    printSubstring(a);
    return 0;
}
