#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int start =0, end = 0, s=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout<<"Maximum contiguous sum is "<<max_so_far<<endl;
    cout << "Starting index "<< start<< endl << "Ending index "<< end << endl;

    return 0;
}
