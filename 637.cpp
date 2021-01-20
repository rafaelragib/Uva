#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    ifstream in;
    in.open("data.txt");
    while(true)
    {
        in >> n;
        if(n==0)
            break;
        int sheet=1;
        cout << "Printing order for " << n <<" pages:" <<endl;
        int f_p=0;
        int lpage=1;
        int temp_n=n;
        while(temp_n%4!=0)
        {
            printf("Sheet %d, ",sheet);
            if(f_p%2)
            {
                printf("back: %d, Blank\n",lpage);
                f_p++;
                sheet++;
                lpage++;

            }
            else
            {

                 printf("front: Blank, %d\n",lpage);
                f_p++;
                lpage++;
            }

            temp_n--;
        }
    int rpage=n;
      while(rpage>lpage)
      {
          printf("Sheet %d, ",sheet);
          if(f_p%2)
            {
                printf("back: %d, %d\n",lpage++,rpage--);
                f_p++;
                sheet++;
            }
            else
            {


                printf("front: %d, %d\n",rpage--,lpage++);
                f_p++;
            }
      }
    }
    return 0;
}
