#include<iostream>
using namespace std;
int main()
{
 int a[4][4] ={ {1, 2, 3, 4,}, {5, 6, 3, 8,}, {9, 10, 11, 12},{3, 14, 15, 16,}};
 int x = 3 ;
 int flag = 0;
 cout<<"Print the original Matrix"<<endl;
 cout<<endl;
 for (int i = 0; i < 4; i++)
{
   for (int j = 0; j < 4; j++)
   {
    cout<< a[i][j]<< " ";
   }
   cout<<endl;
}
cout<<endl<<endl;
for (int i = 0; i < 4; i++)
{
   for (int j = 0; j < 4; j++)
   {
     if(a[i][j] == x)
     {
        flag = 1;

      cout<< "The element  " << x << "  is present  :"<<endl;
      cout<< "The row number is = "<< i<<endl;
      cout<< "The Column number is = "<< j<<endl;
     }
     
   }
   cout<<endl;
}
if (flag == 0)
{
    cout << "Element does'nt Exist"<<endl;
}


}