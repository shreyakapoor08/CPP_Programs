#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int *A = new int[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=1;j<N;j++)
        {
            while(i<j)
            {
                if(A[i] == A[j] + 1 || A[j] == A[i] + 1)
                {
                    cout<<i+1<<j+1;
                }
            }
        }
    }
    return 0;
}
