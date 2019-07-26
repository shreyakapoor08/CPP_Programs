#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        long long int arr[10005];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i=i+k)
        {
            int left = i;

            //to handle case when k is not multiple of n
            int right = min(i + k -1, n - 1);

            //reverse the subarray [left,right]
            while(left < right)
                swap(arr[left++],arr[right--]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
