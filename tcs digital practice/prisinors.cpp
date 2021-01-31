#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j,i,count=0;
    long int ncr;
    long int result,diff;
    cin>>t;
    long int n[t];
    long int m[t];
    long int s[t];
    for(i=0;i<t;i++)
    {
        cin>>n[i]>>m[i]>>s[i];
    }
    for(i=0;i<t;i++)
    {
        count = (n[i]-s[i])+1;
        if(count>=m[i])
        {
            result = (s[i]+m[i])-1;
            cout<<result;
        }
        if(count<m[i])
        {
            diff = m[i]-count;
            while(diff>n[i])
            {
                diff = diff-n[i];
            }
            cout<<diff;
        }
    }

    return 0;
}

//take eg : n=7 m=19 s=2
/*
 A jail has a number of prisoners and a number of treats to pass out to them. Their jailer decides the fairest way to divide the treats is to seat the prisoners around a circular table in sequentially numbered chairs. A chair number will be drawn from a hat. Beginning with the prisoner in that chair, one candy will be handed to each prisoner sequentially around the table until all have been distributed.

The jailer is playing a little joke, though. The last piece of candy looks like all the others, but it tastes awful. Determine the chair number occupied by the prisoner who will receive that candy.

For example, there are 4 prisoners and 6 pieces of candy. The prisoners arrange themselves in seats numbered 1 to 4 . Let’s suppose two are drawn from the hat. Prisoners receive candy at positions 2,3,4,1,2,3. The prisoner to be warned sits in chair number 3
*/
