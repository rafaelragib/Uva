#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
char keyboard(char letter)
{
    int index;
    if(letter==' ')
                return ' ';
    const string key=("1234567890-=QWERTYUIOP[]ASDFGHJKL;'\ZXCVBNM,./");
    index=sizeof(key);
    index=key.find(letter);
    return key[--index];

}
int main()
{
   char s[64];
   while(gets(s))
   {
   for(int i=0;i<s[i];i++)
   {
    cout <<keyboard(s[i]);
   }
cout <<"\n";
   }
}
