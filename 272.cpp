
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char s[10000];
    int sum=1;
    while(gets(s) )
    {
        long  l=strlen(s);

        for(int i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                if(sum%2==0)
                printf("''");
                else printf("``");
                sum++;
                 }
            else printf("%c",s[i]) ;
        }

printf("\n");
    }
}
