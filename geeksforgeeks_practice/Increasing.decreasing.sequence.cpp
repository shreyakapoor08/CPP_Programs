#include<iostream>
using namespace std;

int main()
{
    int n, i;
    int arr[10005];
    cin>>n;
    int inc=1;
    int dec=1;
    bool flag = false;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            if(dec==1)
                //if dec is 1, ie decreasing seq never started
                inc++;
            else
                flag = false;
        }
        if (arr[i]>arr[i+1])
        {
            //if inc is 1 means starting for 1st time
            if(inc >=2)
            {
                dec++;
                flag = true;
            }
            else
                flag = false;
        }

    }
     if(flag == true)
        {
            cout<<"true";
        }
        else
            cout<<"false";
        return 0;
}

//Incresing decreasing sequence
/*

INCREASING DECREASING SEQUENCE
Take the following as input.

A number (N)
Take N more numerical inputs
The N inputs for a sequence S = s1, s2, .., sN. Compute if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format:
Constraints:
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Sample Input
5
1
2
3
4
5
Sample Output
true



#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[10005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int seq1_size = 0;
    int seq2_size = n;
    int pivot = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1]&&i+1!=n)
        {
            seq1_size++;
            pivot = i;
            break;
        }
    }
    bool flag = true;
    for(int i=pivot;i<n;i++)
    {
        if(arr[i]>arr[i+1]&&i+1<n)
        {
            flag = false;
        }
    }
    if(flag) cout<<"true";
    else cout<<"false";
    return 0;
}

*/
