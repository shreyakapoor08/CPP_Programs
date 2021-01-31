#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max = 0;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> a;
    for(int i=1;i<n;i++){
        int sum = arr[i-1];
        while(arr[i]>arr[i-1]){
            sum = sum + arr[i];
            i++;
        }
        a.push_back(sum);
    }
    for(int j=0;j<a.size();j++)
    {
        cout<<"j: "<<a[j]<<" ";
    }
    sort(a.begin(),a.end(),greater<int>());
    cout<<endl;
    for(int j=0;j<a.size();j++)
    {
        cout<<"after sort "<<a[j]<<" ";
    }
    max = a[0];
    cout<<endl;
    cout<<max;

    return 0;
}
