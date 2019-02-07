#include<iostream>
#define PI 3.14
#define PRINT cout<<
using namespace std;

int main()
{
 cout<<2*PI<<endl;
 PRINT "Hello World"<<endl;

 ///const variables
 int x=1.1;
 x++;
 cout<<x<<endl;

 const int y=2.1;
/// y++; created in ROM so cant be updated
 cout<<y<<endl;

 return 0;
}
