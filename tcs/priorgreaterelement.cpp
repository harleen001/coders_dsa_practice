#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    arr.push_back(x);
}
int count=1;
int maxele=arr[0];
for(int i=0;i<n;i++)
{
   if(arr[i]>maxele)count++;

   maxele=max(arr[i],maxele);
}

cout<<count;

}