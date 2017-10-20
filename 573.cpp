#include<iostream>
#include<stdio.h>
using namespace std;

int main ()
{
    float h,u,d,f;


    while(true){
        float total=0;
        cin >> h >>u >>d >>f;

        if(h==0)break;
        int i=1;
        f=u*f/100;
        while(true){
            total+=u;
            if(u>0)
            u-=f;
            if(total>h)break;
            total-=d;
            if(total<0)break;

            i++;
        }
          if(total>=h)
            {
                cout << "success on day " <<i << "\n" ;
            }
           else
            {
                cout << "failure on day " <<i << "\n";

    }
    }
}
