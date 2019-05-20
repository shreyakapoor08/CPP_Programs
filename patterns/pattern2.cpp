#include<iostream>
using namespace std;

int main()
{
    //1st row -> 1 star, 2nd row -> 3 star, 3rd row -> 5 star, nth row -> 2i - 1
    //n - i spaces followed by 2i - 1 stars
    //n/2 + 1
    int n, c, k, space = 1;
  cout<<"\n\nEnter number of rows: ";
  cin>>n;
  space = n - 1;

  for (k = 1; k<=n; k++)
  {
    for (c = 1; c<=space; c++)
      cout<<" ";

    space--;

    for (c = 1; c<= 2*k-1; c++)
      cout<<"*";

    cout<<"\n";
  }

  space = 1;

  for (k = 1; k<= n - 1; k++)
  {
    for (c = 1; c<= space; c++)
      cout<<" ";

    space++;

    for (c = 1 ; c<= 2*(n-k)-1; c++)
      cout<<"*";

    cout<<"\n";
  }
    return 0;
}
