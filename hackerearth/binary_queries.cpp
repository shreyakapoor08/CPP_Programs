#include<iostream>
using namespace std;

int main()
{
    int N;
    int Q;
    int num;
    cin>>N>>Q;
    int *arr = new int[N];
    for(int i=1;i<=N;i++)
    {
        cin>>arr[i];
    }
    while(Q--)
    {
        int m;
        cin>>m;
        if(m==1)
        {
            cin>>num;
            arr[num] = !arr[num];
        }
        if(m==0)
        {
            int L,R;
            cin>>L>>R;
            if(arr[R]==1)
            {
                cout<<"ODD"<<endl;
            }
            else{
                cout<<"EVEN"<<endl;
            }
        }
    }
}
