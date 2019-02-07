#include<iostream>
using namespace std;

///same fun (int a[]) or fun(int *a)
int fun(int *a)
{
    cout<<sizeof(a)<<endl;
    cout<< a<<endl;
}

int main()
{
    int a[] = {1,2,3,4};

    cout<<sizeof(a)<<endl;
    cout<<a<<endl;

    cout<< *a <<endl;
    cout<< *(a+2) <<endl;
    /// *(a+i) ==== a[i]


    fun(a);
}
