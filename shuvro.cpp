#include<bits/stdc++.h>
using namespace std;
//#define N 1000005
   bool prime[1000005+1];
void sieve()
{

    for (int i=2;i<=1000005;i++)
    {
        prime[i]=true;
    }
    for (int i=2;i<=sqrt(1000005);i++)
    {

        if (prime[i])
        for (int j=2;i*i<=1000005;j++)
        prime[i*j]=false;

    }
    prime[2]=false;
}
int main()

{
    long long int n;
    scanf("%lld", &n);
    sieve();
    for (int i=3;i<n;i+=2)
    {
        if (prime[i])
        {

        if( prime[n-i])
{



     printf("%lld = %d + %d\n", n, i, n-i);
     break;

    }

}
    }
}
