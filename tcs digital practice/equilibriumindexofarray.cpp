#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
    int sum = 0;
    int leftsum = 0;

    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum = sum - arr[i];
        if(leftsum == sum)
        {
            return i;
        }
        leftsum += arr[i];
    }
    return -1;

}

int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << equilibrium(arr, arr_size);
    return 0;
}

