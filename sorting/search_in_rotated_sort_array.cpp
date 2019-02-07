#include <iostream>
using namespace std;

int searchIn(int a[],int s,int e,int key)
{
    //Base case
    if(s>e){
        return -1;
    }

    //Rec Case
    int mid=(s+e)/2;

    if(a[mid]==key){
        return mid;
    }

    //Left part, Mid lies in the first line
    if(a[s]<=a[mid]){
        if(key>=a[s] && key<=a[mid]){
            return searchIn(a,s,mid-1,key);
        }
        else{
            return searchIn(a,mid+1,e,key);
        }
    }
    //Mid lies in the second line
    if(key>=a[mid] && key<=a[e]){
        return searchIn(a,mid+1,e,key);
    }
    return searchIn(a,s,mid-1,key);
}

int main(){
int a[] = {5,6,7,1,2,3,4};
int key;
cin>>key;

cout<<"Element found at index"<<searchIn(a,0,6,key);


}
