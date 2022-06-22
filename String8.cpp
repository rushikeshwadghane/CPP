// count number of Vowel
#include<iostream>
using namespace std;

int CountVowel(char *str)
{
   int iCnt=0;
   while(*str!='\0')
   {
       if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
       {
           iCnt++;   //case insensetive
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
    
    int iret = CountVowel(Arr);
    cout<<iret<<" Capital character in String"<<endl;
    return 0;
}