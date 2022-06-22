#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow,iCol;
    public:
        Pattern(int a, int b)
            {
                this->iRow = a;
                this->iCol= b;
            }
            void Display()
            {
                int i=0,j=0;
                for(i=1;i<=iRow;i++)
                {
                    for(j=1;j<=iCol;j++)
                    {
                        cout<<"*"<<"\t";
                    }
                    cout<<endl;
                }
            }    
};

int main()
{
    int iRow=0,iCol=0;
    printf("Enter row and Column\n");
    cin>>iRow>>iCol;

    Pattern obj(iRow,iCol);

    obj.Display();
    return 0;
}