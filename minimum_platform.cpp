/*
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.

Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times must not be same for a train.

Input:
The first line of input contains T, the number of test cases. For each test case, first line will contain an integer N, the number of trains. Next two lines will consist of N space separated time intervals denoting arrival and departure times respectively.
Note: Time intervals are in the 24-hour format(hhmm), preceding zeros are insignificant. 200 means 2:00.
Consider the example for better understanding of input.

Output:
For each test case, print the minimum number of platforms required for the trains to arrive and depart safely.

Constraints:
1 <= T <= 100
1 <= N <= 1000
1 <= A[i] < D[i] <= 2359

Example:
Input:
2
6
900  940 950  1100 1500 1800
910 1200 1120 1130 1900 2000
3
900 1100 1235
1000 1200 1240

Output:
3
1

Explanation:
Testcase 1: Minimum 3 platforms are required to safely arrive and depart all trains.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N; //number of trains
        int arr[N], dep[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i]; //arrival time
        }
        for(int i=0;i<N;i++)
        {
            cin>>dep[i]; //departure time
        }

        //Sort arrival and departure time
        sort(arr, arr+N);
        sort(dep,dep+N);

        //plat_needed indicates number of platforms
        //needed at a time
        int plat_needed = 1, result = 1;
        //indices for arrival and departure time
        int i=1, j=0;

        //Similar to merge in merge sort to process
        //all events in sorted order
        while(i < N && j < N)
        {
            //if next event in sorted order is arrival,
            //increment count of platforms needed
            if (arr[i] <= dep[j])
            {
                plat_needed++;
                i++;

                //Update result if needed
                if(plat_needed>result)
                    result = plat_needed;
            }

            //else decrement count of platforms needed
            else
            {
                plat_needed--;
                j++;
            }
        }
        cout<<result;
    }

    return 0;
}
