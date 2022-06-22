#include<iostream>
using namespace std;
class base
{
    public:
      int x,y;
    base()
    {
        cout<<"Inside Default constructor";     
    }
    ~base()
    {
        cout<<"Inside destructor";
    }
    void fun()
    {

    }

};
class derived 