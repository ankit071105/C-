#include<iostream>
using namespace std;
int main()
{
   //sum difference product sum of pairs:- 


    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0, d = 0, p = 1  ,i;
    int f = a[0] + a[1];
    cout<< "Sum of pair array" <<f <<endl;
    for (int i = 0; i < 10; i++)
    {
      s = s + a[i];
      d = a[i] - d;
      p = s * a[i];
    }
    cout<< "The Sum of the array is "<<  s <<endl;  
 cout<< "The Difference of the array is "<<  d <<endl;  
  cout<< "The Product of the array is "<<  p <<endl;  

int arr[5] = {-10, 45, -90, -32, -4};
int max = arr[0];
for (int i = 0; i < 5; i++)
{
    if(arr[i] > max)
    {
        max =arr[i];
    }
}




// Maxmium & odd - Even
cout<< "The Maximum element in the array is = "<< max <<endl;
int c = 0;
int b[10] = {1, 2, 3, 4, 5, 18, 40, 90, 100, 909};
for (int i = 0; i < 10; i++)
{
   if(b[i] % 2 == 0)
   {
   c++;
   }else if( b[i] % 2 != 0){
       cout<< "Number are odd "<<b[i] << endl;
   } 
}
cout<< "Number are even "<< c << endl;

// count the no of pair having sum as 15
int value = 15;
int count = 0;
for (int i = 0; i < 10; i++)
{
    for (int j = i + 1; j < 10; j++)
    {
       if(a[i] + a[j] == value)
       {
          count++;
       }
    }
    
}
cout<< "The count of pairs having sum as "<< value <<" is  =  "<<count<<endl;














}