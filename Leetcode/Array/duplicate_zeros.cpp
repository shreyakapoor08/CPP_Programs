//input : [1,0,2,3,0,4,5,0]
//outout : [1,0,0,2,3,0,0,4]
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    for(int i=0;i<n-1;i++){
            if(arr[i]==0){

                for(int j=n-1;j>i+1;j--){
                    arr[j] = arr[j-1];
                }
                arr[i+1] = 0;
                //arr[i+1].push_back(0);
                i++;
            }
        }

    for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}
