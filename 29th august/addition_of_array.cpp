#include<iostream>
using namespace std;

void findSum(int a[],int n, int b[], int m, int c[])
{
    int i = n-1;
    int j = m-1;
    int carry=0;
    int s;
    int k=0;

    while(i>=0 && j>=0)
    {
        s = a[i] + b[j] + carry;
        c[k] = s%10;
        carry = s/10;

        k++;
        i--;
        j--;
    }

    //assuming array a is bigger than array b
    while(i>=0)
    {
        s = a[i] +carry;
        c[k] = s%10;
        carry = s/10;
        k++;
        i--;
    }

    if(carry==1)
    {
        c[k] = carry;
        k++;
    }

    ///print
    for(int pos=k-1;pos>=0;pos--)
    {
     cout<<c[pos]<<" ";
    }

}

int main()
{
    int n,m;
    int a[1005],b[1005];
    int c[1005]={0};

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }

    if(n>m){
        findSum(a,n,b,m,c);
        }

    else{
    findSum(b,m,a,n,c);
    }

}
