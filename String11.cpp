// Convert Upper to Lowercase
#include<iostream>
using namespace std;
void  struprX(char *str)
{
   int iCnt=0;
   while(*str!='\0')
   {
       if((*str>=('a')&&(*str<='z')))
       {
           *str = *str-32;
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
    
    struprX(Arr);
    cout<<"String in Lower Case:"<<Arr<<endl;
    return 0;
}