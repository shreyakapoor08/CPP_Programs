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
	    int arr[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int count=1;
	    int majority=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]!=majority){
	             count--;
	             //cout<<count<<"count";
	            if(count==0)
	               {
	                   majority=arr[i];
                       count=1;
	               }
	            }
	         else if(arr[i]==majority)
	         count++;
	    }
	    int inc=0;
	    for(int i=0;i<n;i++)
	    {
	        if(majority==arr[i])
	          inc++;
	    }
	    //cout<<majority;
	    if(inc>(n/2))
	      cout<<majority<<endl;
	      else
	      cout<<"-1"<<endl;

	}
    return 0;
}
