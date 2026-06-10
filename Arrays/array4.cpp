#include<iostream>
using namespace std;
int main(){
    int min , min2, i, arr[5];
    cout<<"Enter elements of an array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<5;i++){
    if(arr[i]!=min){
        min2=arr[i];
        break;
        }
    }
    for(i=0;i<5;i++){
        if(arr[i]>min&&arr[i]<min2){
            min2=arr[i];
        }
    }
    cout<<"Smallest number is: "<<min<<" and "<<"second smallest number is :"<<min2;

    return 0;
}