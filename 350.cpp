#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int z,i,m,l,cas=1;
    while(1)
    {
        scanf("%d %d %d %d",&z,&i,&m,&l);
        if(m==0)break;
        int x1=l;
        int x2=l;
        int k=1;
        x1=(z*x1+i)%m;
        x2=(z*x2+i)%m;
        x2=(z*x2+i)%m;
        while(x1!=x2)
        {
            x1=(z*x1+i)%m;
            x2=(z*x2+i)%m;
            x2=(z*x2+i)%m;
            k++;

        }
//        int x3=(z*l+i)%m;
//        int M=1;
//        while(x1!=x3)
//        {
//             x1=(z*x1+i)%m;
//             x3=(z*x3+i)%m;
//             M++;
//             cout << M << endl;
//        }
        printf("Case %d: %d\n",cas,k);
        cas++;

    }
}
