#include<iostream>
using namespace std;

int Countcapital(char *str)
{
   int iCnt=0;
   while(*str!='\0')
   {
       if((*str>='A')&&(*str<='Z'))
       {
           iCnt++;
       }
       str++;
   }
   return iCnt;
}

int main()
{
    char Arr[30];
    cout<<"Enter Strint"<<endl;
   // scanf("%[^\n]s",Arr);
    cin.getline(Arr,30);
    
    int iret = Countcapital(Arr);
    cout<<iret<<" Capital character in String"<<endl;
    return 0;
}