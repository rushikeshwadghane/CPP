//Problem On string 
#include<string.h>
#include<iostream>
using namespace std;
bool strlenX(char *str)
{
    int i=0;
    int length = strlen(str);
    bool flag = true;
    for(i=0;i<length/ 2;i++)
    {
        if(str[i] != str[length-i-1])
        {
            flag =false;
            break;
        }
  }
  return flag;
}
int main()
{
    char Arr[30];
    cout<<"Enter Strint"<<endl;
   // scanf("%[^\n]s",Arr);
    cin.getline(Arr,30);
    
    bool iret = strlenX(Arr);

    if(iret == true)
    {
        printf("Palindrom\n");
    }    
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}