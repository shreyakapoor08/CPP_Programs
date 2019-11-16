#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[100001];
    int num;
    for(int i=0;i<N;i++)
    {
        cin>>num;
        arr[num]++;
    }
    int T;
    cin>>T;
    while(T--)
    {
        int m;
        cin>>m;
        if(arr[m]>0)
        {
            cout<<arr[m]<<endl;
        }
        else{
            cout<<"NOT PRESENT"<<endl;
        }
    }
}
