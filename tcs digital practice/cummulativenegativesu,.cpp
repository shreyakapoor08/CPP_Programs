// stop processing input after cummulative sum of all the input becomes negative
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int sum = 0;
    int input;
    while(sum>=0){
        cin>>input;
        sum = sum + input;
        if(sum>=0){
            arr.push_back(input);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
