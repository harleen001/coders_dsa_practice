#include <bits/stdc++.h>
using namespace std;

int firstposition(const vector<int> & arr,int target)
{
    int n= arr.size();
    int left=0,right=n-1;
    int firstpos=-1;
    while(left<right)
    {
     int   mid=left + (right-left)/2;
        if(arr[mid]==target)
        {
            firstpos=mid;
            right=mid-1;///////////////////////////////
        }
        else if(arr[mid]<target)

        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return firstpos;
}



int lastposition(const vector <int> & arr,int target)
{
    
    int n=arr.size();//vectors size measured this way else simple array using sizeof operator
    int left=0,right=n-1;
    int lastpos=-1;
    while(left<right)
    {
       int mid=left + (right-left)/2;
        if(arr[mid]==target)
        {
            lastpos=mid;
            left=mid+1;///////////////////////
        }
        else if(arr[mid]<target)

        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return lastpos;
}

int main()
{
  vector<int> b={1,2,3,4,5,4,7,9};/////using vectors for no space error
  int find=4;  
  cout<<"The first Position of Element is ="<<firstposition(b,find)<<endl;
  cout<<"The second Position of Element is ="<<lastposition(b,find);
}

///TAKING -1 AS STARTING AND THEN FINDING BY BINARY SEARCH IN LEFTESTTTT AND RIGHTESTTT