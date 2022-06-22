#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyCLL
{
    private:  //characterstic
        PNODE Head;
        PNODE Tail;

    public:
        SinglyCLL()
        {
            Head = NULL;
            Tail = NULL;
        }
    void InsertFirst(int no){}
    void InsertLast(int no){}
    void InsertAtPos(int no,int iPos){}
    void DeletFirst(){}
    void DeleteLast(){}
    void Display(){}
    int Count(){return 0;}
    
};

int main()
{
    SinglyCLL obj;


    return 0;
}