#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    virtual void fun()
    {
        cout<<"Base fun"<<endl;
    }
    virtual void gun()
    {
        cout<<"Base gun"<<endl;
    }
    void sun()
    {
        cout<<"Base sun"<<endl;
    }
    virtual void run()
    {
        cout<<"Base run"<<endl;
    }

};
class Derived: public Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Inside Derived Fun\n";
    }
    virtual void gun()
    {
        cout<<"derived gun\n";
    }
    void sun()
    {
        cout<<"Derived sun\n";
    }
    virtual void mun()
    {
        cout<<"derived mun\n";                                                  
    }
};


int main()
{
    Base *bp = new Derived();
    bp->fun();
    bp->gun();
    bp->run();
    bp->sun();   
    

}