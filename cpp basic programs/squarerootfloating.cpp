#include<iostream>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    int i=0;
    while(i*i<=n)
    {
        i=i+1;
    }
    float ans = i - 1;

    float inc=0.1;
    int times=1;
    while(times<=p){
        while(ans*ans<=n){
            ans+=inc;
        }
        ans = ans - inc;
        inc = inc/10;
        times = times + 1;
    }

    cout<<ans<<endl;
    return 0;
}
