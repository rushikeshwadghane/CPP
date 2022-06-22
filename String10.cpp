// Convert Upper to Lowercase
#include<iostream>
using namespace std;

void  strlwrX(char *str)
{
   int iCnt=0;
   while(*str!='\0')
   {
       if((*str>=('A')&&(*str<='Z')))
        {
           *str = *str+32;
        }
       str++;
   }

}

int main()
{
    char Arr[30];
    cout<<"Enter Strint"<<endl;
   // scanf("%[^\n]s",Arr);
    cin.getline(Arr,30);
    
    strlwrX(Arr);
    cout<<"String in Lower Case:"<<Arr<<endl;
    return 0;
}