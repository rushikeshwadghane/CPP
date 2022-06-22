//Call by refrence
#include<iostream>
using namespace std;

template<class T>
void Swap(T &p,T&q)
{
    T temp;
    temp = p;
    p=q;
    q=temp;
}
int main()
{
    int No1=11,No2=21;
    cout<<"Before swap data is: "<<No1<<" "<<No2<<endl;
    Swap(No1,No2);
    cout<<"After swap data is:  " <<No1<<" "<<No2<<endl;

    float fNo1=11.11,fNo2=21.21;
    cout<<"Before swap data is: "<<fNo1<<" "<<fNo2<<endl;
    Swap(fNo1,fNo2);
    cout<<"After swap data is:  " <<fNo1<<" "<<fNo2<<endl;


    char cNo1='A',cNo2='B';
    cout<<"Before swap data is: "<<cNo1<<" "<<cNo2<<endl;
    Swap(cNo1,cNo2);
    cout<<"After swap data is:  " <<cNo1<<" "<<cNo2<<endl;
    return 0;
}
