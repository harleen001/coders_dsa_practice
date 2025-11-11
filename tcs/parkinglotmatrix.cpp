#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxsum=0; int sumindex=-1;
    for(int i=0; i<n; i++) {
         int sum=0;
         for(int j=0; j<m; j++) {
             sum+=arr[i][j];
         }
         if(sum>maxsum) {
            maxsum=sum;
            sumindex=i;
         }
         
     }
     cout<<sumindex;
}