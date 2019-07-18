#include<iostream>
using namespace std;

void rearranearray(int arr[], int n)
{
    int temp[n];

    int small=0, large=n-1;

    int flag = true;

    for(int i=0;i<n;i++)
    {
        if(flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];

        flag = !flag;
    }

    for(int i=0;i<n;i++)
    {
        arr[i] = temp[i];
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        rearranearray(arr, n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
