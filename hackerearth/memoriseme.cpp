#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int *arr = new int[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    int Q;
    cin>>Q;
    int *qarray = new int[Q];
    for(int k=0;k<Q;k++)
    {
        cin>>qarray[k];
    }
    for(int j=0;j<Q;j++)
    {
        int count = 0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==qarray[j])
            {
                count++;
            }
        }
        if(count>0)
        {
            cout<<count<<endl;
        }
        else{
            cout<<"NOT PRESENT"<<endl;
        }
    }


    return 0;
}
