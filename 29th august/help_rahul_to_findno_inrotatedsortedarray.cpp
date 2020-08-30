#include<iostream>
using namespace std;

int findKey(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[s] <= arr[mid]){
                //2 cases -> element lies on left or right of the mid
            if(key>=arr[s] && key <=arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(key>=arr[mid] && key<=arr[e]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    int arr[100000];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<findKey(arr,n,key)<<endl;

    return 0;
}
