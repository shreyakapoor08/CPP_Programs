#include<bits/stdc++.h>
using namespace std;

int main()
{   // Given a String -> if
    string input;
    getline(cin,input);
    int i=0,j=0;
//ab56qw7
// ab8ed5
// 56a7

/*i = 1 j=0

*/
    while(input[i]!='\0'){
        if(input[i]=='7'){
           // i++;
            // ab56qa7
           // continue;
        }
        else if(input[i]=='5'){
            //cout<<"check 5 "<<endl;
                if(input[i+1]!='\0' && input[i+1]!='6'){
                        //cout<<"check 6 "<<endl;
                    input[j] = input[i];
                    j++;
                }
                else{
                    i++;
                }
        }
        else{
            input[j] = input[i];
            j++;
        }
        i++;
    }
    input[j] = '\0';
    for(int k=0;k<j;k++){
        cout<<input[k];
    }
}
