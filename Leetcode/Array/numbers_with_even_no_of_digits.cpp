#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *nums = new int[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int result=0;
        for(int i=0;i<n;i++){
            int count=0;
            while(nums[i]!=0){
                nums[i] = nums[i]/10;
                count++;
            }
            if(count%2==0){
                result++;
            }
        }
        cout<<"result is: "<<result;
        return 0;

}
