// Problem Link:https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    double pos,neg,zero;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    cout<<pos/n<<endl;
    cout<<neg/n<<endl;
    cout<<zero/n<<endl;

    return 0;
}