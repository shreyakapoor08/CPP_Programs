#include<bits/stdc++.h>

using namespace std;

int main(){
    double finish = 42.195;
    int x=9;
    vector<double> arr;
    string input;
    cin>>input;
    while(input!="q"){
        double temp= atof(input.c_str());
        //double temp = stod(input);
            if(temp>0.0){
                arr.push_back(temp);
            }
            cin>>input;
        }

    cout<<endl;
    sort(arr.begin(),arr.end(),greater<double>());
    int j=0,count=0;
    while(j<arr.size()&&count<3){
        if(arr[j]<42.195){
                if(ceil(arr[j]) == floor(arr[j])){
                    //cout<<arr[j]<<".0"<<" "; //jugaadu tarika
                    printf("%.1f ",arr[j]);

                }
                else{
                    cout<<arr[j]<<" ";
                }
            count++;
        }
        j++;
    }
    return 0;
}
