/*
 schedule a meeting with investors, 1 meeting per day and days each investor available are given in the respective lists.
find the maximum possible meeting that can be conducted
s=[1,2,3,3,3] e=[2,2,3,4,4] maxmeeting=4
s=[1,1,2] e=[1,2,2] maxmeeting=2
*/
#include<iostream>
using namespace std;

int printMaxActivities(int s[], int e[], int n)
{
    int k,j;
    int count=0;
    k=0;
    for(j=1;j<n;j++)
    {
        if(s[j] >= e[j])
        {
            count++;
            k=j;
        }
    }
    return count;
}

int main()
{
    int n1;
    cin>>n1;
    int s[n1],e[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>s[i];
        cin>>e[i];
    }
    cout<<printMaxActivities(s,e,n1);
    return 0;
}
