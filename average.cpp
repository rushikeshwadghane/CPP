#include<iostream>
using namespace std;
int main(){

    int n=0,i=0;
    float avg=0,sum=0,num=0;
    cout<<"How many number you want to add:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        sum = sum+num;
    }
    cout<<"sum is = " <<sum<< "\n";
    avg = sum/n;
    cout<<"Average of totel no:" <<avg<< "\n";

    return 0;
}