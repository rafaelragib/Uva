#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[10002];
    int i=1;
    while(scanf("%d",&ar[i])==1)
    {
        sort(ar,ar+i+1);
        if(i==1)
            cout << 1 <<endl;
        else
        {
            if(i%2)
            {
                //printf("va: %d\n",i);
               cout << ar[i/2+1] <<endl;
            }
            else
            {
                 int l=i/2;
                int r=i/2+1;
                //cout << ar[l] << " " <<ar[r] <<endl;
                cout << (ar[l]+ar[r])/2 <<endl;

            }
        }
        i++;
        //cout << ar[mid] <<endl;

    }
    return 0;
}
