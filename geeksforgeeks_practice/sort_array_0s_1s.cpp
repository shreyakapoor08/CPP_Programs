/* Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input. The first line denotes the size of the array N. The second lines contains the elements of the array A separated by spaces.

Output:
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.*/

#include<iostream>
using namespace std;

void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size -1;
    int mid = 0;

    //iterate till all the elements are sorted
    while(mid <= hi)
    {
        switch(a[mid])
        {
            //if the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

             // If the element is 1 .
        case 1:
            mid++;
            break;

            // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort012(arr, n);

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
