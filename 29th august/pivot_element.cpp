#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,7,3,9,4,8,6};
    int n = sizeof(arr)/sizeof(int);
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(mid<e && arr[mid]>arr[mid+1])
        {
            cout<<mid<<" ";
            break;
        }
        if(mid>0 && arr[mid]<arr[mid-1])
        {
            cout<<mid-1;
            break;
        }
        if(arr[s]>=arr[mid]){
            e = mid-1;

        }
        if(arr[mid]>=arr[e])
        {
            s = mid+1;
        }

    }
    if(s>e){
        cout<<"Pivot doesnt exist";
    }

}
