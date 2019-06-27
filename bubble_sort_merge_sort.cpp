#include<iostream>
#include<algorithm>
#include<ctime>
#include<cmath>
using namespace std;

void bubbleSort(int *a, int n) {

    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<=n-i-2;j++)
       {
           if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
           }
       }
    }
}

void createRevArray(int *a, int n) {
for(int i=0;i<n;i++)
    {
    a[i] = n-i;
    }
}

int a[1000000];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        createRevArray(a,n);

        ///Note the execution time of bubble sort but not of the whole programe
        clock_t  s = clock(); ///Clock() function that returns the current time of the system
        bubbleSort(a,n);
        clock_t e = clock(); /// clock_t is the datatype  for time
        cout<<"Bubble sort took "<<e -s<<endl;

        ///For merge sort
        createRevArray(a,n);

        ///note the execution time of merge sort but not of the whole program
        s = clock(); ///clock() function that returns the current time of the system in ms
        sort(a,a+n);
        e = clock(); /// clock_t is the datatype for time
        cout<<"Merge sort took " <<e - s<<endl;

    }

    return 0;
}
