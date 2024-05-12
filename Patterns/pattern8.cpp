#include<iostream>
using namespace std;
int main()
{
          int m;
     cin>>m;
     int x = 1;

     cout<<"prinitng alphabetic matrix differnt :-"<<endl;
     while (x <= m)
     {
        int y = 1;
        
        while (y <= m)
        {
            char ch = 'A' + x + y - 2 ;
           cout<<ch<<" ";
            
           y++;
        }
       cout<<endl;
       x++; 
     }
     // all differnt
    int t;
     cin>>t;
     int u = 1;
cout<<" prinitng alphabetic triangle differnt :-"<<endl;
     while (u <= t)
     {
        int v = 1;
        while (v <= u)
        {
            char ch = 'A' + v + u - 2;
           cout<<ch<<" ";
           v++;
        }
       cout<<endl;
       u++; 
     }


    int i = 1, n;
    cin>>n;
        cout<<"Representing different number with reverse order pyradmial :-"<<endl;
    while (i <= n)
    {
        int j = 1;
        char c = 'A' + n - i;
        while (j <= i)
        {
            cout<<c<<" ";
          c++;
            j++;
        }
        cout<<endl;
         i++;
    }
    

    int a = 1, d;
    cin>>d;
    cout<<"Representing same number with reverse order pyradmial :-"<<endl;
    while (a <= d)
    {
        int b = 1;
        char chh = 'A' + n - a;
        while (b <= a)
        {
            cout<<chh<<" ";
            
            b++;
        }
        cout<<endl;
         a++;
    }



























}