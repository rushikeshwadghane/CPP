#include<iostream>
using namespace std;

class demo
{

    public:
    int x,y;
    demo()
    {
        cout<<"Inside default constructor:\n";
    }
    ~demo()
    {
        cout<<"Destructor\n";
    }
    void memory()
    {
        int arr[5];
        int *p = NULL;
        p = new int[5];
        if(p==NULL)
        {
            cout<<"Unable to allocate memory:\n";
        }
        else{
            cout<<"Memory allocate successfully:\n";
        }

        delete p;

    }

};
int main()
{
    demo obj;
    obj.memory();
    return 0;
}
