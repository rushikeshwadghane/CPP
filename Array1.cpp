#include<iostream>
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
        cout<<"Enter the element"<<endl;
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Elment of Array"<<endl;
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<endl;
        }
    }
    int Sumation()
    {
        int iCnt=0,iSum=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            iSum = iSum+ Arr[iCnt];
        }

        return iSum;
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
    iRet =  obj1.Sumation();

    cout<<"Addition is:"<<iRet<<endl;
    return 0;
}