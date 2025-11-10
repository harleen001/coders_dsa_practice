#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int starcount=0; int hashcount=0;
    for(char c:s)
    {
        if (c=='*') starcount++;
        if (c=='#') hashcount++;
    }
    int result;
    result=starcount-hashcount;
    cout<<result;


}