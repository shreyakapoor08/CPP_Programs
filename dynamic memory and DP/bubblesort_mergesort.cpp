#include<iostream>
#include<ctime>
#include<algorithm>
//ff
using namespace std;

void bubbleSort(int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

void createRevArray(int *a,int n)
{
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

    ///reverse sorted array
    ///sort using bubblesort and merge sort
    createRevArray(a,n);

    ///note the execution time of bubble sort but not of the whole program
    clock_t startTime = clock(); ///returns the current time of sys in milli sec
    bubbleSort(a,n);
    clock_t endTime = clock(); //end time
    ///clock_t is the datatype for the time
    cout<<"Bubble sort took "<<endTime - startTime<<endl;

    ///for merge sort
    createRevArray(a,n);

    ///note the execution time of bubble sort but not of the whole program
    startTime = clock(); ///returns the current time of sys in milli sec
    sort(a,a+n);
    endTime = clock(); //end time
    ///clock_t is the datatype for the time
    cout<<"Merge sort took "<<endTime - startTime<<endl;

    }

    return 0;
}
