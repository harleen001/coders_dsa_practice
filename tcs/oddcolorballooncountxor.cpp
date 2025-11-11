#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<char>arr;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        arr.push_back(x);
    }
   char result=0;
   for(char c:arr)
   {
    result^=c;
   }
 cout<<result;
    

}