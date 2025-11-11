#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,0,0,1,2,0,1};
    int zerocount=0,onecount=0,twocount=0;
    for(int c:arr)
    {
        if (c==0) zerocount++;
        if (c==1) onecount++;
        if(c==2) twocount++;
    }
    int i=0;
    
        while(zerocount>0)
        {
            arr[i]=0;
          i++;
            zerocount--;
        }
        while(onecount>0)
        {
            arr[i]=1;
          i++;
            onecount--;
        }
        while(twocount>0)
        {
            arr[i]=2;
          i++;
            twocount--;
        }
        for(int i:arr)
        {
            cout<<i<<" ";
        }

        
}