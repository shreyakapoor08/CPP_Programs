#include<iostream>
using namespace std;

void sumOfArray(int a[],int n,int b[],int m,int c[])
{
    int i=n-1;
    int j=m-1;

    int carry=0;
    int s;
    int k=0;

    while(i>=0&&j>=0){
            s = a[i] + b[j] + carry;
            c[k] = s%10;
            carry=s/10;

            k++;
            i--;
            j--;
    }
    ///Assuming array a[] has more length
    while(i>=0){
        s = a[i] + carry;
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


    ///Print
    for(int position=k-1;position>=0;position--)
    {
        cout<<c[position]<<", ";
    }
    cout<<"END";
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
    cin>>m;
    for(int j=0;j<m;j++){
        cin>>b[j];
    }

    if(n>m){
        sumOfArray(a,n,b,m,c);
        }

    else{
    sumOfArray(b,m,a,n,c);
    }
}
