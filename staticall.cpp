#include<iostream>

using namespace std;

class Demo
{
    public:
    int i,j;
    static int x;

    Demo(int a=10,int b=20){
        cout<<"Inside constructor";
        this->i=a;
        this->j = b;
    }
    // void fun(Demo *this int no)
    void fun(int no)
    {
        cout<<"Inside no static fun";
        cout<<this->i<<"\n";
        cout<<this->j<<"\n";
        cout<<Demo::x<<"\n";
    }
    static void gun(){
        cout<<"Inside static gun";
         cout<<Demo::x<<"\n";
    }

};
int Demo::x=30;
Demo gun();
int main()
{
    cout<<Demo::x<<"\n";
    Demo obj;

    
    obj.fun(11);

    cout<<sizeof(obj)<<"\n";

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    



    return 0;
}