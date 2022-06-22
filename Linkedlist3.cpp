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
    void DeleteAtPose(int iPos);
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
        int iSize= Count();
        if((iPos<1) || (iPos> iSize+1))
        {
            cout<<"Invalid Position";
            return;
        }
        else if(iPos==1)
        {
            InsertFirst(no);
        }
        else if(iPos== iSize+1)
        {
            InsertLast(no);
        }
        else
        {
            PNODE newn = NULL;
            newn = new NODE;
            PNODE temp = Head;
            newn->data = no;
            newn->next = NULL;
            int i=0;
            for(i=1;i<iPos-1;i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
        }
    }

    void SinglyCLL:: DeletFirst()
    {
        if(Head==NULL&&Tail==NULL)
        {
            return;
        }
        else if(Head==Tail)
        {
            delete(Head);
            Head=NULL;
            Tail= NULL;
        }
        else
        {
            Head= Head->next;
            delete Tail->next;
            Tail->next = Head;
        }
    }

    void SinglyCLL:: DeleteLast()
    {
        if(Head==NULL&&Tail==NULL)
        {
            return;
        }
        else if(Head==Tail)
        {
            delete(Tail);
            Head=NULL;
            Tail= NULL;
        }
        else{
            PNODE temp = Head;
            while (temp->next!=Tail)
            {
                temp = temp->next;
            }
            delete Tail;
            Tail = temp;
            Tail->next = Head;
        }
    }
    void SinglyCLL::DeleteAtPose(int iPos)
    {
        int Size = Count();
        if(iPos <1 || iPos> Size+1)
        {
            cout<<"Invalid Position \n";
            return;
        }
        if(iPos==1)
        {
            DeletFirst();
        }
        else if(iPos==Size)
        {
            DeleteLast();
        }
        else
        {
            PNODE temp = Head;
            int i=0;
            for(i=1;i<iPos-1;i++)
            {
                temp = temp->next;
            }
            PNODE temp2 = temp->next;
            temp->next = temp2->next;
            delete temp2;
        }
    }
    void SinglyCLL:: Display()
    {
        
        PNODE temp = Head;
        if(Head==NULL && Tail==NULL)
        {
            return;
        }
        do
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }while(temp!=Head);
         cout<<endl;       
    }
    int SinglyCLL:: Count()
    {
        PNODE temp = Head;
        int Count=0;
        if(Head==NULL && Tail==NULL)
        {
            return Count;
        }
        do
        {
            Count++;
           temp= temp->next;
        } while (temp!=Head);
        
        return Count;
    }
int main()
{
    SinglyCLL obj;
    int iret=0;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);


    obj.Display();
     iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl;


    obj.DeletFirst();
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl;

    obj.DeleteLast();
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl;  

    obj.InsertAtPos(75,3);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl;

    obj.InsertAtPos(85,5);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl; 

    obj.DeleteAtPose(5);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl; 

    obj.DeleteAtPose(3);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of Node:"<<iret<<endl;                         
    return 0;
}