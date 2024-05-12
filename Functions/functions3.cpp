#include<iostream>
using namespace std;


int checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
       if(n % i == 0)
       {
        return 0;
       }
    }
    return 1;
}
void countPrime(int a[], int n)
{
    int prime_count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = checkPrime(a[i]);

        prime_count  += flag;
    }

    cout<< "The number of prime element in array = "<<prime_count<<endl;
    
}

int main() {
// all prime number :-
int a[] = {2 , 3, 7, 17, 13, 41, 31, 23};
int n = sizeof(a)/sizeof(a[0]);

countPrime(a, n);

int number;
cin>>number;
int sum = 0;
int nn = number;
while (nn != 0)
{
  int digit = nn % 10;
  sum = sum + digit;
  nn = nn / 10;
}

cout<< "The Sum of all digits of the number "<< number << " is = "<< sum<<endl;









}