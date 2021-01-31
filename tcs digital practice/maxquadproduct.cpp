#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<4){
        cout<<"Invalid Input ";
    }
    //sort(arr, arr + n, greater<int>());
    sort(arr, arr + n); //for ascending order

    double product1 = 0;
    double product2 = 0;
    double product3 = 0;

     product1 = arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4];
     product2 = arr[0]*arr[1]*arr[2]*arr[3];
     product3 = arr[0]*arr[1]*arr[n-1]*arr[n-2];
     cout<<max(product1,max(product2,product3));
    return 0;
}
