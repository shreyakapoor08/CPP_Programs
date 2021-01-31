#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	getline(cin,input);
	int temp[100];
	for(int i=0;i<input.size();i++){
		temp[i] = input[i] - 96;
	}
	int sum = 0;
	for(int i=0;i<input.size();i++){
		sum = sum + temp[i];
	}
cout<<sum;
	return 0;
}

