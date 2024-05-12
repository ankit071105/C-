#include<iostream>
using namespace std;
int main()
{
// printing reverse order of array


int a[5] = {1, 2, 3, 4, 5};


// first method

int l = 0;
int r = 4;

while (l < r)
{

int temp = a[l];
a[l] = a[r];
a[r] = temp;
l++;
r--;
}
for (int i = 0; i < 5; i++)
{
   cout<< a[i] << " "; 
  
}
  cout<<endl;
 // Second method
int arr[5] = {1, 2, 3, 4, 5};
int b[5];
int t = 0;
for (int i = 4; i >= 0; i--)
{
    // swaping the value to another array
    b[t] = arr[i];
     t++; 

}
for (int i = 0; i < 5; i++)
{
   cout<<b[i]<< " ";
}








}
