#include<iostream>
using namespace std;




// Printing even Numbers
void printRange(int start, int end){
    cout<<endl;
   cout<< "Print the even Number :-"<< endl<<endl;

    while (start <= end)
    {
        if(start % 2 == 0)
        {

           cout<< start<< " ";
        }
     
      start++;
    }

    
}
int main()
{


int start = 0;
int end = 1000;

printRange(start , end);

cout<<endl<<endl;


// Printing Odd Numbers
    cout<< "Print odd number :-"<<endl<<endl;
        while (start <= end)
    {
        if(start % 2 != 0)
        {

           cout<< start<<" ";
        }
     
      start++;
    }


}