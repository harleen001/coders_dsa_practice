#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={10,20,30,40,50};
int target=40;
int n = sizeof(arr)/sizeof(arr[0]); ////////////////////////////////////////////
int left=0; 
int right=n-1;
bool found =false;
   while (left<=right)
   {
    int mid= left + (right-left)/2; //////////////////////////////////////
   
   if(arr[mid]==target)
   {
    cout<<"Number found at position = "<<mid;
    found=true;
    break;
   }
   else if (arr[mid]<target)
   {
    left=mid+1;
   }
   else {
    right=mid-1;
   }

   }
 if(!found){
    cout<<-1;
 }
 return 0;

}