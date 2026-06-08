#include<iostream>
using namespace std;
int main(){
    int arr[10],max,i;
    cout<<"Enter array elements :\n";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
