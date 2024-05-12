#include<iostream>
using namespace std;


// Sum of all nautral numbers :-
int printSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
       sum = sum + i ;
    }
    return sum;
}

// Checking Prime Number
int checkPrime(int n)
{
   for (int i = 2; i < n; i++)
   {
    if (n % i == 0)
    {
        // another divisor exists :-
      return 0;
    }
    
   }
   // returns Prime Numbers
   return 1;
}
int main()
{
    // User input 
 int n;
 cin>>n;

 cout<<"The Sum of 1 to "<< n <<" is  =  "<<printSum(n);


cout<<endl<<endl;

int flag = checkPrime(n);
if( flag == 1)
{
    // Number is Prime
    cout<< n << " is a Prime Number";

}
else
{
    // Number is not a Prime
  cout<< n <<"  is not a Prime Number";
}
}