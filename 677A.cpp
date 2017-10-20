#include<iostream>
using namespace std;
int main()
{
    int n,h,total=0;
    cin >> n >> h ;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
        if(ar[i]>h)
            total+=2;
        else total+=1;
    }
    cout << total <<endl;
}
