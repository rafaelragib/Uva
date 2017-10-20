#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    char s[1000];
    while(gets(s))
    {


    int beg;
    int l=strlen(s);
    cout << l << endl;
    int begg=-1;
    for(int i=0;i<l;i++)
    {

        if(s[i]==' '){
    for(int j=i-1;j>begg;j--)
    {
        printf("%c",s[j]);

    }
printf(" ");
        begg=i;
        }

    }

for(int i=l-1;i>begg;i--)
 printf("%c",s[i]);
printf("\n" );
}
}
