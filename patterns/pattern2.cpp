#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int rows1 = n/2 + 1;
    int i = 1;
    while(i<=rows1)
    {
        int cnt = 1;
        while(cnt<=rows1-i)
        {
            cout<<" ";
            cnt = cnt + 1;
        }
        cnt = 1;
        while(cnt<=2*i-1)
        {
            cout<<"*";
            cnt = cnt + 1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
