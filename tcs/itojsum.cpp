#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    cin>>i>>j;
     if(i>=j || i<0 || j>=10000)
     {
        cout<<"Invalid";
     }
     else
     {
        cout<< (j*(j+1)/2)-(i*(i-1)/2);
     }
}