#include<iostream>
#include<unordered_map>

using namespace std;

class ArrayX
{
    std::unordered_map<int ,int >mobj;
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
    int unordermap()
    {
        for(int i=0;i<iSize;i++)
        {
            mobj[Arr[i]];
            int iret = mobj.count(Arr[i]);
            if(iret%2 != 0 && iret > 2)
            {
                return iret;
            }
        }
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
  //  iRet =  obj1.Sumation();

  //  cout<<"Addition is:"<<iRet<<endl;
    

    int odd =obj1.unordermap();
    cout<<"element found odd times is: "<<odd<<endl;


    return 0;   
    
}