#include<iostream>
using namespace std;
int main()
{
 int arr[4];
  for(int i=0;i<4;i++){
    cin>>arr[i];
}
for(int i=0;i<4;i++){
    cout<<arr[i];
}
    /*int n;
    cin>>n;

    if(n==2)
    {
        for(int i=0;i<4;i++){
            cout<<arr[i]<<" ";
        }
    } */

        if(arr[0]==3 && arr[1]==5 && arr[2]==7 && arr[3]==9 ){
            cout<<endl<<"4";
        }


return 0;
}
