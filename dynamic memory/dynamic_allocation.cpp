#include<iostream>
using namespace std;

int *createArr(int n)
{
    int *a = new int[n]; //dynamic allocation
    for(int i=0;i<n;i++)
    {
        a[i] = i*i;
        cout<<a[i]<<" ";
    }

    ///destroy the dynamic array
    //delete [] a; instead of delete array here delete in int main
    cout<<endl;
    return a;
}

int main()
{

    int n;
    cin>>n;
    int *a = createArr(n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    //destroy the ayyau
    delete [] a;

return 0;
}
