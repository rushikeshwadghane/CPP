// Reverse string 
#include<iostream>
#include<string.h>
using namespace std;

void  strrevX(char *str)
{
   char *start = str;
   char *end = str;
   char temp;
   while (*end!='\0')
    {
       end++;
    }
   end--;
   while(start<end)
   {
       temp = *start;
       *start=*end;
       *end = temp;
       start++;
       end--;
   }
   
}
int main()
{
    char Arr[30];
    cout<<"Enter Strint"<<endl;
    cin.getline(Arr,30);
    
    strrevX(Arr);
    cout<<"String after reverse:"<<Arr<<endl;
    return 0;
}