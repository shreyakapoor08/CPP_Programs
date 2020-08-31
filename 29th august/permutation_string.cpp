//same character same baar aarahe hai

#include<iostream>
#include<cstring>
using namespace std;

bool isPermuation(char *a,char *b)
{
    int freq[26] = {0};
    for(int i=0;a[i]!='\0';i++){
        freq[a[i]-'a']++; //to get the index of array where we have to increment B is ascii value 66 - a ki ascii 65 output 1 which is index
    }

    for(int i=0;b[i]!='\0';i++){
        freq[b[i]-'a']--;
    }

    //check for all zeros
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            //means saare character nahi hai
            return false;
        }
    }
    return true;
}

int main()
{
    char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);

    if(isPermuation(a,b))
    {
        cout<<"Hai";
    }
    else
    {
        cout<<"Nahi hai";
    }
    return 0;

}
