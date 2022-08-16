#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * rchild;
    struct node * lchild;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class BinarySearchtree
{
    public:
    void InsertHead(PPNODE head,int no)
    {
        PNODE newn = NULL;
        newn = new(NODE);
        newn->lchild = NULL;
        newn->rchild = NULL;
        newn->data = no;
        PNODE temp = *head;
        if(*head==NULL)
        {
            *head = newn;
        }
        else
        {
            while (1)
            {
                if(no > temp->data)
                {
                    if(temp->rchild == NULL)
                    {
                        temp->rchild = newn;
                        break;
                    }
                    temp = temp->rchild;
                }
                else if(no < temp->data)
                {
                    if(temp->lchild == NULL)
                    {
                        temp->lchild = newn;
                        break;
                    }
                    temp = temp->lchild;
                }
                else if(no == temp->data)
                {
                    free(newn);
                    break;
                }             
            } 
        }
    }
    void Inorder(PNODE head)
    {
        if(head != NULL)
        {
            Inorder(head->lchild);
            printf("%d ",head->data);
            Inorder(head->rchild);
        }
    }        
};
int main()
{

    BinarySearchtree obj;
    PNODE First =NULL;

    obj.InsertHead(&First, 11);
    
    obj.InsertHead(&First,9);
    obj.InsertHead(&First,21);
     obj.InsertHead(&First,15);

    obj.Inorder(First);

    return 0;
}