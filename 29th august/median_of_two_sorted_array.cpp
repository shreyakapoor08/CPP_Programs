#include<iostream>
using namespace std;

float median(int arr1[],int arr2[],int n){
    int lo1 = 0, hi1 = n-1;
    int lo2 = 0, hi2 = n-1;

    ///if there is only one element in both the arrays
    if(n==1){
        return(arr1[0]+arr2[0])/2;
    }

    ///Otherwise, shrink my search space by computing m1 and m2
    while(true){
        ///m1 and m2 denote the index
        ///median1 and median2 denotes the values at these index

        int m1,m2,median1,median2;

        m1 = (lo1+hi1)/2;
        m2 = (lo2+hi2)/2;

        median1 = arr1[m1];
        median2 = arr2[m2];


        ///Base 2 elements
        if(hi1-lo1==1){
            int smallElement = max(arr1[lo1],arr2[lo2]);
            int bigElement = min(arr1[hi1],arr2[hi2]);
            return (smallElement+bigElement)/2.0;
        }
        if(median1==median2){
            return median1; ///or median2
        }

        if(median1<median2){
            hi2 = m2;
            lo1 = m1;
        }
        else{
            hi1 = m1;
            lo2 = m2;
        }
    }
}

int main(){
    int a[] = {1,3,5,7,10,12};
    int b[] = {2,16,18,20,22,24};

    int n=6;
    cout<< median(a,b,n)<<endl;
}

