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
    unordered_map<char,int> count;
    for(char c:arr)
    {
count[c]++;
    }
   bool oddfound=false;
   char firstodd='\0';
    for(char color:arr)
    {
        if(count[color]%2!=0){
            firstodd=color;
            oddfound=true;
            break;
        }
    }
    if(oddfound) cout<<firstodd;
    else{
cout<<"All are even";
    }

}