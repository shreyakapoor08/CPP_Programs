#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int *nums = new int(n);
   for(int i=0;i<n;i++){
    cin>>nums[i];
   }

    int count=0,result=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                result=max(result,count);
            }
            else{
                count=0;
            }
        }
       cout<<"result is: "<<result;

}
