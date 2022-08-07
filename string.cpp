//Problem On string 

#include<iostream>
using namespace std;
string Display(string str)
{
    
    int l = str.length();
    int k= 0;
    for(int i=l-1;i>=0;i--)
    {
      cout<<str[i];
    }
    ptr[k] = '\n';
    return ptr;
}
int main()
{
    char Arr[]="Hello";
        
    string rev = Display(Arr);

      cout<<rev;   
    return 0;
}