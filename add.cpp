#include<iostream>
using namespace std;

class Arithmetic
{
    public:
    int ino1;
    int ino2;   //characterstics

    Arithmetic()     //default constructor
    {
        cout<<"inside default constructor:\n";
        int ino1=0;
        int ino2=0;
        cout<<"Value of No1 and No2:"<<ino1 << ino2<<"\n";
    }
    Arithmetic(int A,int B)
    {
        cout<<"Inside parameterise constructor\n";
        
        ino1=A;
        ino2=B;
        cout<<A<<B<<"\n";
    }
    ~Arithmetic()
    {
        cout<<"inside destructor:\n";
    }

    int Addition(int no1,int no2)
    {
        int ans=0;
        ans= no1+no2;
        return ans;
    }
    int substraction(int no1,int no2){
        int ans=0;
        ans=no2-no1;
        return ans;
    }
};    

int main()
{

    int ivalue1=0,ivalue2=0,iret=0;

    cout<<"Enter first number\n";
    cin>>ivalue1;

    cout<<"Enter second number\n";
    cin>>ivalue2;

    Arithmetic obj1;
    Arithmetic obj2(ivalue1,ivalue2);
    
     iret = obj1.Addition(ivalue1,ivalue2);
     cout<<iret<<"\n";
     iret = obj2                    .substraction(ivalue1,ivalue2);
     cout<<iret<<"\n";
    return 0;
}