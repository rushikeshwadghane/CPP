#include<iostream>
#include<unordered_map>

using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int [iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
    void Accept()
    {
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {   
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<" ";
        }
        cout<<endl;
    }
    void SelectionSort()
    {
         cout<<"Element After Selection Sort"<<endl;
        int i=0,j=0,min_index = 0,temp=0;
        for(i=0;i<iSize;i++)
        {
            min_index = i;
            for(j=i;j<iSize;j++)
            {
                if(Arr[min_index]> Arr[j])
                {
                    min_index = j;
                }
            }
            if(i!= min_index)
            {
                temp = Arr[i];
                Arr[i]= Arr[min_index];
                Arr[min_index] = temp;
            }
        }
    }
    void BubbleSort()
    {
         cout<<"Element After Bubble Sort"<<endl;
        int i=0,j=0,temp=0;
        for(i=0;i<iSize;i++)
        {
            for ( j = 0; (j < iSize-i-1); j++)
            {
                if(Arr[j]>Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
            
        }
    }
    void InsertionSort()
    {
         cout<<"Element After Insertion Sort"<<endl;
        int i=0,j=0,selected = 0;
        for(i=0;i<iSize;i++)
        {
            for(j=i-1,selected =Arr[i];(j>=0)&&(Arr[j]>selected);j--)
            {
                Arr[j+1] =  Arr[j];
            }
            Arr[j+1] = selected;
        }
    }
    void MergrSort()
    {

    }
    void QuickSort()
    {
        
    }
};

int main()
{
    int iRet = 0,iLength=0;
    cout<<"Enter lentgh of length"<<endl;
    cin>>iLength;
    ArrayX obj1(iLength);

    obj1.Accept();
    obj1.Display();
   obj1.SelectionSort();
   // obj1.BubbleSort();
   // obj1.InsertionSort();
    obj1.Display();
    

    return 0;   
    
}