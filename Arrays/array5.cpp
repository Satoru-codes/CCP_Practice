#include<iostream>
using namespace std;
int main(){
    int i,arr[5],match;
    cout<<"Enter elements orf the array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to find:";
    cin>>match;
    for(i=0;i<5;i++){
        if(match==arr[i]){
            cout<<"Number found at "<<i+1;
        break;
        }
    }
    if(i==5){
        cout<<"Number not found";
    }

    return 0;
}