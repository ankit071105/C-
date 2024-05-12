#include<iostream>
using namespace std;

int binarysearch(int a[], int l, int r, int k)
{
    
    while (l <= r)
    {
       int mid = l + (r-1)/2;
       if(a[mid] == k)
       {
        return k;
       }
       else if(a[mid] > k)
       {
       return binarysearch(a, l, mid-1, k);
       }
       else 
       {
      return binarysearch(a, mid+1, r, k);
       }
    }
    return -1;
}


int main()
{

int a[] = {1,3,6,8,9,11};
int k ;
cin>> k;
int n = sizeof(a)/sizeof(a[0]);
int index = binarysearch(a ,0 ,n-1 ,k);

cout<< "The element "<< k << " is present at index : "<< index <<endl;
return 0;



}