#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *a, int key, int n){
    //our array is sorted in decreasing order
    int lo = 0;
    int hi = n-1;


    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] < key && key < a[mid - 1]){
                //if alice score is greater than mid
            return mid;
        }
        else if(a[mid] > key && key >= a[mid+1]){
            return mid + 1;
        }
        else if(a[mid] < key){
            hi = mid - 1;
        }
        else if(a[mid] > key){
            lo = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int *scores = new int[n];
    int *alice = new int[m];

    int *res = new int[m]; //final array holding rank of alice
    int *ranks = new int[n]; //hold initial rank of all array
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    //cout<<"i am score: "<<sizeof(scores)/sizeof(scores[0]);
    for(int i=0;i<m;i++){
        cin>>alice[i];
    }
    //cout<<"i am alice: "<<sizeof(alice)/sizeof(alice[0]);
    ranks[0] = 1; //its a decreasing array

    for(int i=1;i<n;i++){
        if(scores[i] == scores[i-1]){
            ranks[i] = ranks[i-1];
        }
        else{
            ranks[i] = ranks[i-1] + 1;
        }
    }
    //cout<<"start"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ranks[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        int aliceScore = alice[i];
        cout<<"Alice score "<<aliceScore;
        cout<<endl;
        //check boundary condition
        if(aliceScore > scores[0]){
            res[i] = 1;
        }
        else if(aliceScore < scores[n-1]){
            res[i] = ranks[n-1] + 1;
        }
        else{
            //if it is in between
            //cout<<"Size of scores :"<<sizeof(scores)/sizeof(scores[0]);
            int index = binarySearch(scores,aliceScore,n); //to check where alice score fits
            res[i] = ranks[index];
        }

    }

    for(int i=0;i<m;i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
