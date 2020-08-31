//divisible subarray
/* you are given n elements . find the number of good sub arrays. good subarray is a sub array such that it is divisible by N*/

//concept of pigeon hole principle
//1. build array of cumulative sum that will contain sum upto a particular index
//sum till index 2 is b and sum till index 1 is a then sum of subarray will be b-a
//we need (b-a)%N = 0
//now we will just take sum % N
//6 boxes and 5 unique values , atleast 2 boxes will have same value
//why are we worried abt the buckets with same val
//cz that is the key for our ans, cz we were looking for pos where b%n = a%n. hence we will get a same sum and when we subtract them it will be 0

#include<iostream>
#include<cstring> //headerfile for memset
using namespace std;

#define ll long

ll a[1000005], pre[1000005];

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(pre,0,sizeof(pre)); //initialize array with sum of 0
        pre[0] = 1; //0th pos sum is 0 so prefex is 1

        int sum = 0;
        //read the input
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            sum %=n;
            sum = (sum + n) % n; // for negative case
            pre[sum]++;
        }
        ll ans = 0;
        for(int i=0;i<n;i++){
            ll m = pre[i];
            ans += (m)*(m-1)/2;
        }
        cout<<ans<<endl;
    }
return 0;
}
