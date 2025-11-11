#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> arr={"flower","flow","flight"};
    sort(arr.begin(),arr.end());
     string temp="";
    int n=arr.size();
    string first=arr[0];
    string last=arr[n-1];
    for(int i=0;i<first.size();i++)
    {
     if(first[i]==last[i])
     {
        temp+=first[i];
     }
     else {
        break;
     }
    }
    cout<<temp;
    
}