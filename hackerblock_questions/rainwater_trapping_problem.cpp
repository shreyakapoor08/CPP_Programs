#include<iostream>
using namespace std;

int findWater(int arr[], int n)
{
    ///left[i] contains height of tallest bar to the left of ith bar including itself
    int left[n];

    ///right[i] contains height of the tallest bar to the right of the ith bar including itself
    int right[n];

    ///initialize result
    int water = 0;

    ///fill left array
    left[0] = arr[0];
    for(int i=1;i<n;i++)
        left[i] = max(left[i-1],arr[i]);

    ///fill right array
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
        right[i] = max(right[i+1],arr[i]);

    ///calc the accumulated water element by element
    for(int i=0;i<n;i++)
        water += min(left[i],right[i]) - arr[i];

    return water;
}

int main()
{
    int arr[] = {0,2,1,3,0,1,2,1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "maximum water that can be accumulated is "<<findWater(arr,n);

    return 0;
}
