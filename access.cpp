#include<iostream>
using namespace std;

class Demo
{
    int i;
    public:
    int j;
    Demo()
    {
        int i=10;
        int j=20;
        cout<<"Inside Default constructor";
        cout<<i<<j<<"\n";
    }
    private:
    int k;
    void fun()
    {
        cout<<"Inside fun method:";
    }

};
int main()
{
    Demo dobj;
    cout<<dobj.j<<"\n";

    return 0;
}