//Singly Circular Linked List
#include<iostream>
using namespace std;

struct node
{
    int Data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
    public:
        SinglyCLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int Pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
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
    newn->Data = no;
    newn->next = NULL;
    if(Head == NULL && Tail==NULL)
    {
        Head = newn;
        Tail = newn;
    }
    else{
        newn->next = Head;
        Head = newn;
        Tail->next = Head;
    }
}
void SinglyCLL::InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->Data = no;
    newn->next = NULL;    
    if(Head==NULL && Tail==NULL)
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail->next  =newn;
        Tail = newn;
        newn->next= Head;
    }
}
void SinglyCLL::InsertAtPos(int no,int Pos)
{
    int Size = Count();
    if(Pos<1 || Pos>(Size+1))
    {
        printf("Invallid Position");
        return;
    }
    if(Pos==1)
    {
        InsertFirst(no);
    }
    else if(Pos==(Size+1))
    {
        InsertLast(no);
    }
    else
    {
            PNODE newn = NULL;

            newn = new NODE;

            newn->Data = no;
            newn->next = NULL;

            PNODE temp = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < Pos-1; iCnt++)
            {
                temp = temp->next;
            }

            newn->next = temp->next;
            temp->next = newn;
    }
}
void SinglyCLL::DeleteFirst()
{
    if((Head==NULL) && (Tail==NULL))
    {
        return;
    }
    else if(Head==Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else{
        
        Head = Head->next;
        delete Tail->next;
        Tail->next = Head;
    }
}
void SinglyCLL::DeleteLast()
{
    PNODE temp=Head;
    if((Head==NULL) && (Tail==NULL))
    {
        return;
    }
    else if(Head==Tail)
    {
        delete Head;
    }
    else
    {
        while(temp->next!=Tail)
        {
           temp =  temp->next; 
        }
        delete Tail;
        Tail = temp;
        Tail->next = Head;
    }
}
void SinglyCLL::DeleteAtPos(int ipos)
{
    int iSize = Count();

    if((ipos < 1) || (ipos > iSize))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iSize)
    {
        DeleteLast();
    }
    else
    {
            PNODE temp1 = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < ipos-1; iCnt++)
            {
                temp1 = temp1->next;
            }

            PNODE temp2 = temp1->next;

            temp1->next = temp2->next;
            delete temp2;
    }
}
void SinglyCLL::Display()
{
    cout<<"Element of LinkedList:\n";
    PNODE temp = Head;
    do
    {
        cout<<temp->Data<<" ";
        temp = temp->next;
    } while (temp!=Head);
    printf("\n");   
}
int SinglyCLL::Count()
{
    PNODE temp = Head;
    int iCnt=0;
    do
    {
        iCnt++;
        temp = temp->next;
    } while (temp!=Head);

    return iCnt;
}
int main()
{
    SinglyCLL obj;
    int iret=0;

    obj.InsertFirst(11);
    obj.InsertLast(21);
    obj.InsertLast(51);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(151);
    obj.Display();

    iret = obj.Count();
    cout<<"Number of Element in LL:"<<iret<<endl;


    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Element in LL:"<<iret<<endl;

    
    obj.InsertAtPos(75,3);
    obj.InsertAtPos(55,5);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Element in LL:"<<iret<<endl;      

    obj.DeleteAtPos(3);
    obj.DeleteAtPos(4);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Element in LL:"<<iret<<endl;                 

    return 0;
    
}


