#include<iostream>
using namespace std;
int main(){
    int a ,b ;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Before swap a:"<<a<<" and b:"<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping a:"<<a<<" and b:"<<b;
    return 0;
}
