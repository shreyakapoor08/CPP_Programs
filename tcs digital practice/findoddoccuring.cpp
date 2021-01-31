//Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = 0;
    for(int i=0;i<n;i++){
        res = res^arr[i];
    }
    cout<<res<<" ";
}
