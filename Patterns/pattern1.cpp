#include<iostream>
using namespace std;
int main()
{
   // prinitng 1-10 
   int i = 1 , n;
   cin>>n;
     cout<<" Printing  Number  :-"<<endl;
while (i <= n)
{ 
    int j = 1;
    while (j <= n)
    {
     cout<<" "<<j<<" ";
     j++;
    }
    cout<<endl;
    i++;
}
// prinitng 10-1
   int a = 1 , c;
   cin>>c;
   cout<<" Printing Resverse Number  :-"<<endl;

while (a <= c)
{ 
    int b = 1;
    while (b <= c)
    {
      
     cout<<" "<<c - b + 1<<" ";
     b++;
    }
    cout<<endl;
    a++;
}


// Prinitng all different values :-
   int x = 1 , y;
    int count = 1;
   cin>>y;
   cout<<" Printing all Different Number  :-"<<endl;
   while (x <= y)
 { 
    int z = 1;
   
    while (z <= y)
    {
      
     cout<<count<<" ";
      count = count + 1;
     z = z + 1;
    }
    cout<<endl;
    x++;
  }
}