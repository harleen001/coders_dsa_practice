//ARRAY WAS ORIGINALLY SORTED AND THEN ROTATED
#include <bits/stdc++.h>
using namespace std;

int sortedArray(vector <int> arr, int target)
{
    int n=arr.size();
    int left=0,right=n-1;
    while(left<=right)
    {
        int mid=left + (right-left)/2;

        if(arr[mid]==target)
        {
            return mid;
        }///////////IF DIRECT ELEMENT FOUND


       if(arr[left]<=arr[mid])/////////CHECKING IN LEFT PART
       {
        if(arr[left]<=target && target<arr[mid])/////in left take left as exception (else)//point to remember
        {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
       }
       else{////////////CHECKING IN RIGHT PART
         if(arr[mid]<target && target<=arr[right])
        {
           left=mid+1;
        }
        else{
            right=mid-1;/////////TAKING MID TO ANSWER BY + AND -
        }
       }

    }
    return -1;
}
int main()
{
    vector<int> arr={6,7,8,9,1,2,3,4,5};
    int target=3;
    cout<<sortedArray(arr,target);

}