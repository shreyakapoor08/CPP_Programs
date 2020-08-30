//arrange no. such that no are decreasing increasing and so on

//try without sorting as it takes more time
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,4,2,7,8};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i=i+2)
    {
        //check left ele
        if(i>0 && arr[i-1]>arr[i]){
            swap(arr[i],arr[i-1]);
        }
        //check right ele
        if(i<=n-2 && arr[i+1]>arr[i]){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
