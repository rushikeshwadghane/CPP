#include<iostream>

using namespace std;

class Sorting 
{
    public:
    int *Arr  =NULL;
    int length = 0;
    Sorting(int *ptr,int size)
    {
       Arr = new int[size];
       Arr = ptr;
       length = size;
    }
    void Display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }
    void SelectionSort()
    {
        cout<<"Array After Sort"<<endl;
        int i=0,j=0,min_index=0,temp=0;
        for(i=0;i<length;i++)
        {
            min_index = i;
            for(j=i;j<length;j++)
            {
                if(Arr[min_index]> Arr[j])
                {
                    min_index = j;
                }    
            }
            if(i!=min_index)
            {
                temp = Arr[i];
                Arr[i] = Arr[min_index];
                Arr[min_index] = temp;
            }
        }
    }
    void InsertionSort()
    {
        cout<<"Array After Sort"<<endl;
        int i=0,j=0,selected=0;
        for(i=0;i<length;i++)
        {
            for(j=i-1,selected= Arr[i];(j>=0) && Arr[j]>selected;j--)
            {
                Arr[j+1]  = Arr[j];
            }
            Arr[j+1] = selected;
        }
    }
};

int main()
{
    int n=0;
    cout<<"Enter size of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Sorting obj(arr,n);
    obj.Display();
  //  obj.SelectionSort();
    obj.InsertionSort();    
    obj.Display();

    return 0;
}