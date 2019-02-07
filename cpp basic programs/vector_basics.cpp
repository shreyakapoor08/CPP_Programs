#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ///Vector is a resizable(dynamic) array
    ///that can grow or shrink in size

    vector<int> v;
    cout<<v.capacity()<<" is the initial capacity"<<endl;

    ///Reserve -  tell the vector to reserve to reserve some fixed boxes
    v.reserve(100); ///will contain atleast 100 boxes
    ///Push_back(element) function inserts elements in the vector

    for(int i=1;i<=5;i++){
        v.push_back(i*i);
    }
    ///1 4 9 16

    ///Print the vector
    /// size() given the no of elements stored in the vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";  ///or cout<<v.at(i)

    }
    cout<<endl;
    ///Pop_back function
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    ///Capacity - the actual number of size or boxes in the vector
    cout<<endl;
    cout<<v.capacity()<<" is the capacity";
}
