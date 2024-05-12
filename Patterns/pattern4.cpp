#include<iostream>
using namespace std;
int main()
{
    // prinitng rightangle triamgle in differnt :-
int n, i = 1 ;
cin>>n;
int count = 1;
while (i <= n)
{ 
    int j = 1;
 while (j <= i)
 {
   cout<<count<<" ";
    count++;  
   j++;

 }
 cout<<endl;
 i++;
}
int m, a = 1 ;
cin>>m;

while (a <= m)
{ 
    int b = 1;
 while (b <= a)
 {
   cout<<a - b + 1<<" ";
   
   b++;

 }
 cout<<endl;
 a++;
}
}