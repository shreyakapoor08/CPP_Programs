#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,3,4,2,7,8};
    int n = sizeof(a)/sizeof(int);

    //Go to every second element and create a peak
    for(int i=0;i<n;i+=2){

        ///Check for the left element
        if(i>0 && a[i-1]>a[i]){
            swap(a[i],a[i-1]);
        }

        ///Check for the right element
        if(i<=n-2 && a[i+1]>a[i]){
            swap(a[i],a[i+1]);
        }

    }
    /// Print the array
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
