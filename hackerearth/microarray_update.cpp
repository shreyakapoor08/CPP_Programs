/*code is running but not on code blocks */
#include<iostream>
using namespace std;
int main()
{
long int n;
int i,k,j,o,count,min;
int a[1000000];
cin>>o;
for(i=0;i<o;i++)
{
count = 0;
cin>>n;
cin>>k;
for(j=0;j<n;j++)
{
cin>>a[j];
}
min = a[0];
for(j=0;j<n;j++)
{
if(a[j]<min)
{
min = a[j];
}
}
count = k-min;
if(count < 0)
{
count = 0;
}
cout<<count<<"\n";
}

return 0;
}
