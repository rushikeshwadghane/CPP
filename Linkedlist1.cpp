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
    SinglyCLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no,int iPos);
    void DeletFirst();
    void DeleteLast();
    void Display();
    int  Count();
};
    SinglyCLL::SinglyCLL()
    {
        Head = NULL;
        Tail = NULL;
    }

    void SinglyCLL::InsertFirst(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        if((Head == NULL) && (Tail==NULL)) // If LL is Empty
        {
            Head = newn;
            Tail = newn;
        }
        else  //if LL contain atlest one node
        {
            newn->next=Head;
            Head= newn;
        }
        Tail->next=Head; 
    }
    void SinglyCLL:: InsertLast(int no)
    {
        PNODE newn = NULL;
        newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        if((Head == NULL) && (Tail==NULL)) // If LL is Empty
        {
            Head = newn;
            Tail = newn;
        }
        else  //if LL contain atlest one node
        {
            Tail->next = newn;
            Tail= newn;
        }
        Tail->next=Head;
    }

    void SinglyCLL:: InsertAtPos(int no,int iPos)
    {

    }

    void SinglyCLL:: DeletFirst()
    {

    }

    void SinglyCLL:: DeleteLast()
    {

    }

    void SinglyCLL:: Display()
    {
        
        PNODE temp = Head;
        while(temp!=Tail)
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }
        cout<<"|"<<temp->data<<"|->";
        cout<<endl;
            
    }

    int SinglyCLL:: Count()
    {
        return 0;
    }

int main()
{
    SinglyCLL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    return 0;
}