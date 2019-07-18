#include<iostream>
using namespace std;

/*Function to left Rotate arr[] of
  size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    int i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    for(int i=0;i<d;i++)
        leftRotatebyOne(arr,n);
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int d;
        cin>>d;

        //function calling
        leftRotate(arr,d,n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
