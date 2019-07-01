/*
rectangular paper of h*w . fold the paper so that dimensions are h1*w1 in minimum number of folds.
h=8 w=4 h1=6 w1=1 ans=3
h=2 w=3 h1=2 w1=2 ans=1
*/
#include<iostream>
using namespace std;

int main()
{
    int h,w,h1,w1;
    cin>>h;
    cin>>w;
    cin>>h1;
    cin>>w1;
    int counter=0;
    while(h>=h1&&w>=w1)
    {
        if(h!=h1&&w!=w1)
        {
            h=h-h1;
            counter++;
            w=w-w1;
            counter++;
            break;
        }
        if(h==h1&&w!=w1)
        {
            w=w-w1;
            counter++;
            break;
        }
        if(h!=h1&&w==w1)
        {
            h=h-h1;
            counter++;
            break;
        }

    }
    cout<<counter;


    return 0;
}
