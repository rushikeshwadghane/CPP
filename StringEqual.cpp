#include<iostream>
using namespace std;
bool strcatX(char *src,char *dest)
{
    while (*src!='\0')
    {
        if(*src==*dest)
        {
            src++;
            dest++;   
        }
        else
        {
            break;
        }
    }
    if((*src=='\0') && (*dest=='\0'))
    {
        return true;
    }
    else{
        return false;
    }    
}
int main()
{
    char Arr[30];
    char Brr[30];
    cout<<"Enter first String"<<endl;
    cin.getline(Arr,30);
    cout<<"Enter Second Strint"<<endl;
    cin.getline(Brr,30);
    
     bool bret= strcatX(Arr,Brr);

    if(bret==true)
    {
         cout<<"String are equal"<<endl;
    }
    else{
        cout<<"String are not equal"<<endl;
    }
    return 0;
}