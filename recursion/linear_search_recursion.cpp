#include<iostream>
using namespace std;


///first occurence of key
int searchElement(int *a,int n,int key)
{
    ///base case
    if(n==0){
        return -1;
    }

    ///rec case
    if(a[0]==key){
        return 0;
    }

    int choteMaiMila = searchElement(a+1,n-1,key);
    if(choteMaiMila==-1)
    {
        return -1;
    }
    else{
        return 1 + choteMaiMila;
    }

}

///last occurence of key
///start with i=0 and find last occurence of element using recursion

int lastIndex(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }

    int aageMila = lastIndex(a+1,n-1,key);
    if(aageMila==-1){
        ///check at the current position
        if(a[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }
    }
    return aageMila + 1;
}

int main()
{
    int a[] = {1,3,5,7,8,3,7,7,7,2};
    int n = sizeof(a)/sizeof(int);
    cout<<"First occ "<<searchElement(a,n,7)<<endl;
    cout<<"Last occ "<<lastIndex(a,n,7)<<endl;

return 0;
}
