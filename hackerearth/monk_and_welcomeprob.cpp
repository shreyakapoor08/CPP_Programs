#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int *A = new int[N];
    int *B = new int[N];
    int *C = new int[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>B[i];
    }
    for(int j=0;j<N;j++)
    {
        C[j] = A[j] + B[j];
        cout<<C[j]<<" ";
    }

}
