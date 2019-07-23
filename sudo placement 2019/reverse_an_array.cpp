#include<iostream>
using namespace std;

void reverseArray(int arr[],int start,int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
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

        //function calling
        reverseArray(arr,0,n-1);

        //to print reverse array
        printArray(arr,n);
        cout<<endl;

    }

    return 0;
}
