#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a[100];
        cout<<a<<endl; //address is coming out to be same means a[100] will be made only once
        //so space complexity id O(1)
        int *b = new int[100];
        cout<<b<<endl; //dynamically allocated ,harr baar array banega toh complexity is O(n)
        delete [] b; //O(1) memory in this case
        int *c = new int[i]; //O(n**2)
        //delete [] c; //O(n)
        cout<<c<<endl;

    }
    for(int j=1;j<=n;j++)
    {
        int b[10]; //this is cz static array is allocated once before the exec of program
        ///compile time pr allocate hogya ,run time pr dubara nahi hoga
    }


    return 0;
}
