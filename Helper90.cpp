#include "Header90.h"    
DoublyCLL::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
    CountNode = 0;
}
void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn =NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(CountNode== 0) // (Head==NULL && Tail == NULL)
    {
        Head= newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Head = newn;       
    }
    Head->prev =Tail;
    Tail->next = Head;
    CountNode++;
}

void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn =NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(CountNode== 0) // (Head==NULL && Tail == NULL)
    {
        Head= newn;
        Tail = newn;
    }
    else
    {
        Tail->next = newn;
        newn->prev = Tail;
        Tail = newn;
    }
    Tail->next = Head;  
     Head->prev =Tail;  
    CountNode++;    
}
void DoublyCLL::InsertAtPos(int no,int Pos)
{
    if((Pos<1)||(Pos>CountNode+1))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(Pos ==1)
    {
        InsertFirst(no);
    }
    else if(Pos==CountNode+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        PNODE Temp = Head;
        for (int i=1;i<Pos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next->prev = newn;
        Temp->next = newn;
        newn->prev = Temp;
        CountNode++;
    }
}
void DoublyCLL::DeleteFirst()
{
    if(CountNode==0)
    {
        return;
    }
    else if (CountNode==1)
    {
        delete Head;
        Head=NULL;
        Tail = NULL;
    }
    else{
        Head = Head->next;
        delete Tail->next; // delete Head->prev;
    }
    Tail->next = Head;
    Head->prev  = Tail;
    CountNode--;
}
void DoublyCLL::DeleteLast()
{
  if(CountNode==0)
    {
        return;
    }
    else if (CountNode==1)
    {
        delete Head;
        Head=NULL;
        Tail = NULL;
    }
    else{
        Tail = Tail->prev;
        delete Tail->next;
    }
    Tail->next = Head;
    Head->prev = Tail;
    CountNode--;
}
void DoublyCLL::DeleteAtPos(int Pos)
{
    if((Pos<1)||(Pos>CountNode))
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(Pos ==1)
    {
        DeleteFirst();
    }
    else if(Pos==CountNode)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp =Head;
        for(int i=1;i<Pos-1;i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        CountNode--;
    }
}
void DoublyCLL::Display()
{
    int i=0;
    PNODE temp =Head;
    for(i=1; i<= CountNode;i++)
    {
        cout<<"|"<<Head->data<<"|->";
        temp = temp->next;
    }
    cout<<"\n";
}
int DoublyCLL::Count()
{
    return CountNode;
}
