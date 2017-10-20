#include<iostream>
#include<string.h>
#include<stdio.h>
#include <cstdio>
using namespace std;
int main()
{
    char s[254];
    long long length;
    long long hour,minit,sec,speed=0,now,time=0,newspeed;
    double distance=0;


    while(cin.getline(s,sizeof(s)))
    {
        length=sscanf(s,"%lld:%lld:%lld %lld",&hour,&minit,&sec, &newspeed);
        now=(hour*60*60)+(minit*60)+(sec);
        distance+=speed*(now-time);
        time=now;
        if(length==3)
        {
            printf("%02lld:%02lld:%02lld %.2lf km\n", hour, minit, sec, distance/3600);

        }
        else if (length == 4)
			speed = newspeed;
    }
}
