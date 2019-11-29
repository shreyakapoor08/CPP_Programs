#include<iostream>
using namespace std;

int main() {

 int N,ar[102],cnt = 0;
 cin >> N;
 for(int n = 0; n < N; n++)cin >> ar[n];
 for(int i = 1; i < N;cnt++){
        if(ar[i+1] != 1 && i < N-1)i+=2;
        else i++;
 }
 cout << cnt << endl;
 return 0;
}
