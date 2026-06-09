// Find the second largest element in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    cout<<"Enter the elements of the array:\n";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int max2;
    for(i=0;i<5;i++){
        if(arr[i]!=max){
            max2=arr[i];
            break;
        }
    }
    for(i=0;i<5;i++){
        if(max2!=max){
            if(arr[i]<max&&arr[i]>max2){
                max2=arr[i];
            }
        }
    }
    cout<<"Largest ="<<max<<" and "<<"second largest ="<<max2;
    return 0;
}