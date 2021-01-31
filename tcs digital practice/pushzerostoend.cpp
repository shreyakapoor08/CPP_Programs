#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
 int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0){
            arr[j] = arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    pushZerosToEnd(arr, n);
    cout << "Array after pushing all zeros to end of array :\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
