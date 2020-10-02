///Find pair of prime numbers in range m to n such that the difference between 2 successive prime numbers are 6. eg 5,11 and 11,17

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    int j,i;
    cin>>m>>n;
    int primearray[n+1];
    //cout<<sizes;
    for(int k=0;k<n+1;k++)
    {
        for(i=m;i<=n;i++)
    {
        for(j=m+1;j<=n;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            primearray[k] = i;
        }

    }
    }


    return 0;
}
