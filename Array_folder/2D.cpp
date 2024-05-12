#include<iostream>
using namespace std;
int main()
{
   int a[4][4] ={ {1, 2, 3, 4,}, {5, 6, 7, 8,}, {9, 10, 11, 12},{13, 14, 15, 16,}};
    cout<< " Printing Original Matrix"<<endl <<endl;
     for (int i = 0; i < 4; i++)
   {
    for (int j = 0; j < 4; j++)
    {
       
        cout<<a[i][j]<< "  ";
    }
    cout<<endl;
   }
   cout<<endl;
   cout<<endl;
      int b[4][4] ={ {1, 2, 3, 4,}, {5, 6, 7, 8,}, {9, 10, 11, 12},{13, 14, 15, 16,}};
   int sum[4][4];
   for (int i = 0; i < 4; i++)
   {
    for (int j = 0; j < 4; j++)
    {
        sum[i][j] = a[i][j] + b[i][j];
    }
    
   }
   cout<< " Printing Sum of matrix :-"<<endl<<endl; 
   for (int i = 0; i < 4; i++)
   {
    for (int j = 0; j < 4; j++)
    {
       

        cout<<sum[i][j]<< "  ";
    }
    cout<<endl;
   }
   cout<<endl;
   cout<<endl;
   for (int i = 0; i < 4; i++)
   {
  for (int j = 0; j < 4; j++)
  {
   if(a[i][j] > a[j][i]){
    int temp = a[j][i];
    a[j][i] = a[i][j];
    a[i][j] = temp;
   }

  }
   }

    cout<< " Printing Swaping Matrix"<<endl <<endl;
     for (int i = 0; i < 4; i++)
   {
  for (int j = 0; j < 4; j++)
  {
   
    cout<<a[i][j]<<"  ";
   
  }
cout<<" "<< endl;
  
   
   

}
}