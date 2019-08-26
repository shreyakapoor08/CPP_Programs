/*
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
*/
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
	    int leftsum = 0;
	    int index = -1;
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        sum +=a[i];
	    }
	    for(int i=0;i<n;i++){
	        sum -= a[i];
	        if(sum == leftsum){
	            index = i;
	            break;
	        }
	        leftsum = leftsum + a[i];

	    }
	    if(index !=-1)
	        cout << index+1 << endl;
	   else
	        cout << index<<endl;
    }

    return 0;
}
