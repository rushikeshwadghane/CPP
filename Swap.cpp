
//Call by refrence

#include<iostream>
using namespace std;

void Swap(int &p,int &q)
{
    int temp;
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


    return 0;
}

//Call by Address

void Swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}
int main()
{
    int No1=11,No2=21;

    cout<<"Before swap data is: "<<No1<<" "<<No2<<endl;

    Swap(&No1,&No2);

    cout<<"After swap data is:  " <<No1<<" "<<No2<<endl;


    return 0;
}