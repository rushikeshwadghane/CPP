
#include<iostream>

#include<unordered_map>
using namespace std;

class Dublicate
{
    std::unordered_map<int, int > Array;

    public:
    void put(int Arr[],int size)
    {
        int icnt =0;
        printf("Duplicate element is :\n");
        for(int i=0;i<size;i++)
        {
           Array[Arr[i]]= 0;
           int ret = Array.count(Arr[i]);
           if(ret > 1)
           {
                printf("%d ",Arr[i]);
           }  
        }
    }    
};

int main()
{
    printf("Enter how much element you want to enter:\n");
    int size=0,n=0,i=0;
   scanf("%d",&size);
    int *Arr = NULL;
    Arr = (int*)malloc(size * sizeof(int));
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    Dublicate obj;
    obj.put(Arr,size);
    return 0;
}