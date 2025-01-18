#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int low, int high, int target)
{
while(low<=high)
{
    int mid = low+(high-low)/2;

    if(arr[mid]=target)
    {
        return mid;
    }
    else if (arr[mid]<target)
    {
        BinarySearch(arr,mid+1,high,target);
    }
    else
    {
        BinarySearch(arr,low,mid-1,target);
    }
}
return -1;
}
int main()
{
int arr[5]={10,20,30,40,50};
int target=20;
int n = sizeof(arr)/sizeof(arr[0]);
cout<<BinarySearch(arr,0,n-1,target);

}