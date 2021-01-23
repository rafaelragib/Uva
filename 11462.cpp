#include<bits/stdc++.h>
using namespace std;
int getMax(vector<int> &ar,int n)
{
    int m=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]>m)
            m=ar[i];
    }
    return m;
}
void countingSort(vector<int>&ar, int n, int place) {
  //const int mx = 10;
  vector<int> output(n);
  vector<int> cnt(10);

  // Calculate count of elements
  for (int i = 0; i < n; i++)
    cnt[(ar[i] / place) % 10]++;

  // Calculate cummulative count
  for (int i = 1; i < 10; i++)
    cnt[i] += cnt[i - 1];

  // Place the elements in sorted order
  for (int i = n - 1; i >= 0; i--) {
    output[cnt[(ar[i] / place) % 10] - 1] = ar[i];
    cnt[(ar[i] / place) % 10]--;
  }

  for (int i = 0; i < n; i++)
    ar[i] = output[i];
}
void radix_sort(vector<int> &ar,int n)
{
    int m=getMax(ar,n);
    for (int place = 1; m / place > 0; place *= 10)
        countingSort(ar, n, place);

}
int main()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n==0)
            break;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
            cin >> ar[i];
        radix_sort(ar,n);

        for(int i=0;i<n;i++){
            if(i==n-1)
            cout << ar[i];
            else
            cout << ar[i] << " ";

        }

        cout <<endl;
    }
    return 0;
}
