#include<iostream>
#include<algorithm>
using namespace std;

bool target_sum(int A[], int arr_size, int sum)
{
    int l, r;

    l = 0;
    r = arr_size-1;

    while (l < r)
    {
         if(A[l] + A[r] == sum)
         {
             cout<<A[l]<<","<<A[r]<<" ";
           return 1;
         }


         else if(A[l] + A[r] < sum)
              l++;
         else // A[i] + A[j] > sum
              r--;
    }
    return 0;
}


int main()
{
    int A[1000];
    int sum;
    int  arr_size;
    cout<<"enter size of array"<<endl;
    cin>>arr_size;
    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<arr_size;i++)
    {
        cin>>A[i];
    }
    cout<<"\n";
    cout<<"Array entered is"<<endl;
    for(int i=0;i<arr_size;i++)
    {
        cout<<A[i]<<" ";
        cout<<endl;
    }

    sort(A,A+arr_size);
    cout << "\n\n The array after sorting is : "<<endl;
    for(int i = 0; i < arr_size; ++i)
        {
            cout << A[i] << " ";
            cout<<endl;
            }
    cout<<"enter the sum which you want to target"<<endl;
    cin>>sum;


    if (target_sum(A,arr_size,sum))
        cout<<"Is the pair with given sum";
    else
        cout<<"Array doesn't have two element with given sum";

}

