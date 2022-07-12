// concatination
#include<iostream>
using namespace std;
void  strcatX(char *src,char *dest)
{
    while(*dest!='\0')
    {
        dest++;
    }
    while (*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest = '\0'; 
}
int main()
{
    char Arr[30];
    char Brr[30];
    cout<<"Enter first String"<<endl;
    cin.getline(Arr,30);
    cout<<"Enter Second Strint"<<endl;
    cin.getline(Brr,30);
    
    strcatX(Arr,Brr);
    cout<<"String after concatination:"<<Brr<<endl;
    return 0;
}