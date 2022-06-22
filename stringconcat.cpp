// concatination
#include<iostream>
using namespace std;
void  strcatX(char *src,char *dest)
{
    while (*src!='\0')
    {
        
        src++;
        
    }
    while (*dest!='\0')
    {
        *src=*dest;
        src++;
        dest++;
    }
    *src = '\0'; 
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
    cout<<"String after concatination:"<<Arr<<endl;
    return 0;
}