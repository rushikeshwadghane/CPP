#include<iostream>
using namespace std;
class Demo
{
    public:
    int i;
    const int j;
    Demo(): j(20)
    {
        i=10;
      cout<<"Insside default constructor\n";
    }
    Demo(int a,int b):i(a),j(b)
    {
    

      cout<<"Inide parameterise constructor\n";
       

    }
};

int main()
{
    Demo obj(11,21);
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    return 0;
}