#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,j,m,p;
    cin>>n>>k>>j>>m>>p;
    int bananaeaters=m/k;
    int leftbanana=m%k;
    int peanuteaters=p/j;
    int leftpeanut=p%j;
    if(leftbanana>0) bananaeaters++;
    if(leftpeanut>0) peanuteaters++;

    int result= n-bananaeaters-peanuteaters;
    cout<<result;
}