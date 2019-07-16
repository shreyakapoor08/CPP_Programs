#include<iostream>
using namespace std;

//passing a 2d array to function
void deleteArray(int **a,int n)
{
    //first i need to delete the rows
    for(int i=0;i<n;i++)
    {
        delete [] a[i];
    }
    //delete
    delete [] a;
    a = 0; //a will now point to null
}

int main()
{
    //pointer to a pointer
    int **a; //a is a local variable

    int rows,cols;
    cin>>rows>>cols;

    a = new int*[rows];

    cout<<a<<endl; //address of first box
    cout<<&a<<endl; //address of a

    //for every box in the array we can create one row
    for(int i=0;i<rows;i++)
    {
        a[i] = new int[cols];
        cout<<a[i]<<endl;
    }

    //now to print it
    int no=1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            a[i][j] = no;
            no++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //a is being pass by value so any change in a will not reflect in a but array will get deleted
    deleteArray(a,rows);
    a = 0;

    cout<<endl;
    cout<<a<<endl;


return 0;
}
