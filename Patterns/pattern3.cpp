#include<iostream>
using namespace std;
int main()
{
  // prinitng rightangle triamgle in number: -
int n, i = 1 ;
cin>>n;
cout<<"prinitng rightangle triamgle in number :-"<<endl;
while (i <= n)
{ 
    int j = 1;
 while (j <= i)
 {
   cout<<i<<" ";
   j++;
 }
 cout<<endl;
 i++;
}
 // prinitng rightangle triamgle in stars :-
int x, y = 1 ;
cin>>x;
cout<<"prinitng rightangle triamgle in stars :-"<<endl;
while (y <= x)
{ 
    int z = 1;
 while (z <= y)
 {
   cout<<"*"<<" ";
   z++;
 }
 cout<<endl;
 y++;
}
    // prinitng rightangle triamgle in reverse order numbers :-
int d, a = 1 ;
cin>>d;
int count = 1;
cout<<"prinitng rightangle triamgle in differnt numbers :-"<<endl;
while (a <= d)
{ 
    int b = 1;
 while (b <= a)
 {
   cout<<d - b+ 1<<" ";
    count++;  
   b++;

 }
 cout<<endl;
 a++;
}
}