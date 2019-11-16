#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        int *arr = new int[N];
        cin>>N>>K;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int smallest = 9;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<=smallest)
            {
                smallest = arr[i];
            }
        }
        int mintime;
        mintime = K - smallest;
        cout<<mintime<<endl;
    }
}

