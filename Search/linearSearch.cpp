#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
   return -1; 
}

int main()
{

int a[] = {1,3,6,8,9,11,23,45,12,3};
int k = 3;
int n = sizeof(a)/sizeof(a[0]);
int index = linearSearch(a, n, k);

cout<< "The element "<< k << " is present at index : "<< index <<endl;
return 0;



}