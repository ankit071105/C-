//Diagonal 
#include<iostream>
using namespace std;
int main()
{
    int c =0 ;
  int a[4][4] ={ {1, 2, 3, 4,}, {5, 6, 7, 8,}, {9, 10, 11, 12},{13, 14, 15, 16,}};
     cout<< " Printing the Original Matrix : -"  << endl;
      for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
          
    cout<< a[i][j]  << " ";
    
      }
      cout<<endl;
    }
    cout<<endl<<endl;
 
 
  // PRINCIPAL DIAGONAL :-
  

    cout<< " Printing the Principal diagonal element : -"  << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i == j){
          
    cout<< a[i][j]  << " ";
    
      }
      
    }
    
  }
 cout<<endl<<endl;
  // SECONDARY DIAGONAL :- 
  



    cout<< " Printing the Secondary diagonal element : -"  << endl;
    int k = 3;
  for (int i = 0; i < 4; i++)
  {
    cout<<a[i][k]<< "  ";
    k--;
      
    }
    
  }
 
 
