#include<iostream>
using namespace std;
int main()
{
      // prinitng alphabetic matrix same
     int n;
     cin>>n;
     int i = 1;
     cout<<"prinitng alphabetic matrix same :-"<<endl;
     while (i <= n)
     {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
           cout<<ch<<" ";
           j++;
        }
       cout<<endl;
       i++; 
     }
        // prinitng alphabetic matrix differnt
          int m;
     cin>>m;
     int x = 1;
     cout<<"prinitng alphabetic matrix differnt :-"<<endl;
     while (x <= m)
     {
        int y = 1;
        while (y <= m)
        {
            char ch = 'A' + y - 1;
           cout<<ch<<" ";
           y++;
        }
       cout<<endl;
       x++; 
     }
       // prinitng alphabetic triangle
    int c;
     cin>>c;
     int a = 1;
     cout<<" prinitng alphabetic triangle :-"<<endl;
     while (a <= c)
     {
        int b = 1;
        while (b <= a)
        {
            char ch = 'A' + a - 1;
           cout<<ch<<" ";
           b++;
        }
       cout<<endl;
       a++; 
     }
            // prinitng alphabetic triangle differnt
    int t;
     cin>>t;
     int u = 1;
cout<<" prinitng alphabetic triangle differnt :-"<<endl;
     while (u <= t)
     {
        int v = 1;
        while (v <= u)
        {
            char ch = 'A' + v - 1;
           cout<<ch<<" ";
           v++;
        }
       cout<<endl;
       u++; 
     }
}
