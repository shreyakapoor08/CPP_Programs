#include<iostream>
#include<algorithm>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum)
{
    int l,r;
     for (int i = 0; i < arr_size - 2; i++)
     {
         l = i + 1;
         r = arr_size - 1;
         while (l < r)
        {
         if(A[i] + A[l] + A[r] == sum)
         {
             cout<<A[i]<<","<<A[l]<<","<<A[r]<<" ";
                return 1;
         }
        else if(A[i] + A[l] + A[r] < sum)
              l++;
         else
              r--;
        }

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
    for(int k=0;k<arr_size;k++)
    {
        cin>>A[k];
    }
    cout<<"\n";
    cout<<"Array entered is"<<endl;
    for(int k=0;k<arr_size;k++)
    {
        cout<<A[k]<<" ";
        cout<<endl;
    }

    sort(A,A+arr_size);
    cout << "\n\n The array after sorting is : "<<endl;
    for(int k = 0; k < arr_size; k++)
        {
            cout << A[k] << " ";
            cout<<endl;
            }
    cout<<"enter the sum which you want to target"<<endl;
    cin>>sum;
    if (find3Numbers(A,arr_size,sum))
        cout<<"Is the triplet with given sum";
    else
        cout<<"Array doesn't have three element with given sum";

}
