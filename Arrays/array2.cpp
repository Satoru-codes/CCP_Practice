#include<iostream>
using namespace std;
int main(){
    int i,arr[10], max,min ,sum=0;
    float avg;
    cout<<"Enter the elements of the array:\n";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    min=arr[0];
    for(i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(i=0;i<10;i++){
        sum+=arr[i];
    }
    avg=(float)sum/10;
    cout<<"Maximum:"<<max<<"\n"<<"Minimum:"<<min<<"\n"<<"Sum:"<<sum<<"\n"<<"Average:"<<avg;
    return 0;
}