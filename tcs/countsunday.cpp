#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    unordered_map<string,int>m;
    m["monday"]=6; m["tuesday"]=5; m["wednesday"]=4;
    m["thursday"]=3; m["friday"]=2; m["saturday"]=1; m["sunday"]=0;

    int result=n/m[s];
    cout<<result;
}