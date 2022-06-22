//Problem On string 

#include<iostream>
using namespace std;
int strlenX(char *str)
{
    int iCnt=0;
    char ch = 'l';
    while (*str!='\0')
    {
        if(*str==ch)
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
    
    int iret = strlenX(Arr);
    cout<<"'l' occure in String  is:"<<iret<<endl;
    
    return 0;
}