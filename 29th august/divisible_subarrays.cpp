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

ll a[1000005], pre[1000005]; //pre[100005] frequency sum

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(pre,0,sizeof(pre)); //initialize array with sum of 0
        pre[0] = 1; //0th pos sum is 0 so prefex is 1

        // -> freq[0];
        // freq[sum]
        // find ->
        int sum = 0;

        map<int,int> freq;
        //read the input
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
           // sum %=n;
            //sum = (sum + n) % n; // for negative case eg (-5+3)%5 = -2 in order to make t positive we add 5 or n to it
            //pre[sum]++; //incremented the frequency of bucket
            freq[sum]++; // ->
        }
        // k = 1
        //1 - 4
        // 2 -> 3
        int subArraysWithSumZero=0;
        int subArraysWithSumk=0;
        for(int i:freq){
                // Subarray -> subtract karke 'k aye r-l = k =>
            int firstKey = i.first; //key
            int secondKey = firstKey - k; //2nd key
            int v1 = i.second; //value - Itne sabArrays thee ->
            int v2 = freq[secondVal]; //2nd value ->
            subArraysWithSumk += v1*v2; // v1C1 * v2C1
            subArraysWithSumZero = n*(n-1)/2;

        }
        cout<<subArraysWithSumZero<<endl;
        //[1,2,-2,3,4]
        // [0,1,3,1,4,8] - prefix sums ->
        // map<int,int> freq;
        //Key value pair
        // freq[pref[i]]++;
        // 0 - 1 -> 0 prefix sum ->
        //1- 2 ->
        // 3 - 1
        // 4- 1
        //8-1
        ll ans = 0;
        for(int i=0;i<n;i++){
            ll m = pre[i];
            ans += (m)*(m-1)/2; //we did mC2 which is m * m-1 / 2

        }
        // SubArray with sum 0
        //
        cout<<ans<<endl;
    }
return 0;
}
