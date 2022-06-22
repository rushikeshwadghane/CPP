#include<iostream>
using namespace std;
class Base
{
    public:
    int x,y;
    void fun()   //concreate non virtual
    {
        cout<<"Base fun\n";
    }
    virtual void gun()  //conctreate virtual function 
    {
        cout<<"Base gun\n";
    }
    virtual void run()=0;  // Abstract function 

};

class Derived:public Base
{                                               
    int i,j;
    void fun() //Redifination concreate function 
    {
        cout<<"Derived fun";
    }
    virtual void gun()  //overriding function 
    {
        cout<<"Derived gun\n";
    }
    void run()       //concreate function 
    {
        cout<<"Derived run\n";
    }

};

int main()
{
    //Base obj    - not allowed
    Derived obj;
    Base *ptr = NULL;
    ptr= &obj;      //Upcasting 

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";


    ptr->fun();
    ptr->gun();
    ptr->run();

    return 0;
}