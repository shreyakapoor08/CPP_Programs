#include<bits/stdc++.h>
using namespace std;

int countPairsWithDiffK(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] - arr[j] == k || arr[j] - arr[i] == k )
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[] =  {1, 5, 3, 4, 2};
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n = arr.length();
    cout<<"n is "<<n<<endl;
    int k = 3, result;
    result = countPairsWithDiffK(arr, n, k);
   cout<<result;
    return 0;
}

