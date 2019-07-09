#include<iostream>
using namespace std;

///class is just a piece of code representing how a car bucket will look like
class Car{
    char name[20]; ///ek string jismai 100 character ho sakte hai
    //char[18]; allocation 4 4 ke size mai ho raha hai so ans is 24
    //char name[13]; 13 + 4 = 17 , 17 ka nearest multiple of 4 is 20
    int price;

    //if class doesnt contain any data members then the output will be 1
    //size of an empty class obj is 1
};

int main()
{
    Car A; // A is obj of that class, and object take memory
    cout<<sizeof(A)<<endl; //20 bytes for name and 4 byte for price
}
