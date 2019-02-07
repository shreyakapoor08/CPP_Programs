#include<iostream>
using namespace std;

int main()
{
    // Read N Numbers
    int n;
    cin>>n;

    int no;
    for(int i=1;i<=n;i++){
        cin>>no;
        int sum_o = 0;
        int sum_e = 0;

        for(int k=no;k>0;k=k/10){
            int last_digit = k%10;
            if(last_digit%2==1){
                sum_o += last_digit;
            }
            else{
                sum_e += last_digit;
            }
        }

        if(sum_o%3==0||sum_e%4==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

return 0;
}

