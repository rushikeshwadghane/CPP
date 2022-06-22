#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node<T> *next;
    struct node<T> *prev;
};

template <class T>
class DoublyCLL
{
    public:
        struct node<T> *Head;
        struct node<T> *Tail;
        int Count;

        DoublyCLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int); 

        void Display();
        int CountNode();        
};
template <class T>
DoublyCLL<T>::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template<class T>
void DoublyCLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL; 
    newn = new node<T>;
    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;
    if(Head==NULL && Tail==NULL)
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head->prev = newn;
        Head = newn;

    }
    Tail->next = Head;
    Count++;
}

template <class T>
void DoublyCLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL; 
    newn = new node<T>;
    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no; 
    if(Head==NULL && Tail==NULL)
    {
        Head = newn;
        Tail = newn;
    }
    else{

         Tail->next = newn;
         newn->prev = Tail;
      
         Tail=newn;
    }
    Tail->next = Head;
    Count++;       
}
template <class T>
void DoublyCLL<T>::InsertAtPos(T no,int Pos)
{
    int Size  = CountNode();
    if((Pos<1)||(Pos>Size+1))
    {
        cout<<"Invalid Position"<<endl;
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
        struct node<T> *temp = Head;
        struct node <T> *newn = NULL;
        newn = new node<T>;
        newn->next = NULL;
        newn->data = no;
        newn->prev = NULL;
        for(int i=1;i<Pos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        newn->prev = temp;
        newn->next->prev = newn;
        Count++;
    }
}    

template <class T>
void DoublyCLL<T>::DeleteFirst()
{   
    if(Head == NULL && Tail == NULL)
    {
        return;
    }
    else if (Head == Tail)
    {
        delete Head;
        Head= NULL;

    }
    else
    {
        Head = Head->next;
        delete(Tail->next);
        Tail->next = Head;
        Head->prev = Tail;
    }
    Count--;
}
template <class T>
void DoublyCLL<T>::DeleteLast()
{
    if(Head == NULL && Tail == NULL)
    {
        return;
    }
    else if (Head == Tail)
    {
        delete Head;
        Head= NULL;

    }
    else
    {
        Tail = Tail->prev;
        delete Head->prev;
        Head->prev = Tail;
        Tail->next = Head;
    }    
    Count--;
}
template <class T>
void DoublyCLL<T>::DeleteAtPos(int pos)
{
    struct node <T> *temp = NULL;

    int Size = CountNode();

    if((pos < 1) || (pos > Size+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos ==1)
    {
        DeleteFirst();
    }
    else if(pos == Size)
    {
        DeleteLast();
    }
    else
    {
        temp = Head;

        for( int iCnt =1; iCnt < (pos-1) ;iCnt++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;
        Count--;
    }
}

template <class T>
void DoublyCLL<T>::Display()
{
    cout<<"Element From Linked-List: "<<endl;
    struct node<T> *temp = Head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=Head);     
    cout<<endl;
}

template <class T>
int DoublyCLL<T>::CountNode()
{
    return Count;
}