#include<bits/stdc++.h>
using namespace std;

void internetAddress(string s) {
    // Write your code here
    int flag=1;
	int flag1=1;
	int flag2=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h' && s[i+1]=='t' && s[i+2]=='t' && s[i+3]=='p' && flag1==1){
	        flag1=0;
	        flag2=0;
	        cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<"://";
	        i+=3;
	    }
	  else if(s[i]=='f' && s[i+1]=='t' && s[i+2]=='p' && flag2==1){
	        flag2=0;
	        flag1=0;
	        cout<<s[i]<<s[i+1]<<s[i+2]<<"://";
	        i+=2;
	    }
        else if(s[i] == 'r' && s[i+1] == 'u' && flag==1){
            flag=0;
	        cout<<"."<<s[i]<<s[i+1];
            if((i+2)<s.size()){
	            cout<<"/";
	        }
	        i+=1;
        }
        else{
	        cout<<s[i];
	    }
    }
}
    int main()
    {
        string s;
        cin>>s;
        internetAddress(s);
        return 0;
    }
