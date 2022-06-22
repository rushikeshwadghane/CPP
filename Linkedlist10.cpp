#include<iostream>

#include"progrm130.h"
using namespace std;

int main()
{
    DoublyCLL<int> obj;
    int iret=0;

    obj.InsertFirst(11);
    obj.InsertLast(21);
    obj.InsertLast(51); 
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(151);

    
    obj.Display();

    iret = obj.CountNode();
    cout<<"Number of Element in LL:"<<iret<<endl;


    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of Element in LL:"<<iret<<endl;

    
    obj.InsertAtPos(75,3);
    obj.InsertAtPos(55,5);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of Element in LL:"<<iret<<endl;      

    obj.DeleteAtPos(3);
    obj.DeleteAtPos(4);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Number of Element in LL:"<<iret<<endl;               

    return 0;
    
}