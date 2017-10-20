#include<stdio.h>
#include<string.h>
#include<string>
int soundex (char x)
{
    char array0 [] = "AEIOUYWH";
    char array1 [] = "BPFV";
    char array2 [] = "CSKGJQXZ";
    if (strchr(array0, x))      return 0;
    if (strchr(array1, x))      return 1;
    if (strchr(array2, x))      return 2;
    if ( x == 'D' || x == 'T')  return 3;
    if ( x == 'L')              return 4;
    if ( x == 'M' || x == 'N')  return 5;
    if ( x == 'R')              return 6;
}


int main()
{





char s[25];
printf ("         NAME                     SOUNDEX CODE\n");
        while(gets(s)){
 char out[25];

        int firstnum,current;
        firstnum=soundex(s[0]);
        out[0]=s[0];
        out[1]=out[2]=out[3]='0';
        int j=1;
        int l=strlen(s);
        for(int i=1; i<l; i++)
        {
            current = soundex(s[i]);
            if(current!=firstnum && current!=0)
            {
                out[j++]=current+'0';
            }
            if(current!=firstnum)
                firstnum=current;

        }
        printf("         %s",s);
        for ( int i = 0; i < 25 - l; i++ ) printf (" ");
        printf ("%c%c%c%c\n", out [0], out [1],
                out [2], out [3]);
        }
    printf("                   END OF OUTPUT\n");
}
