#include<iostream>
using namespace std;
int main()
{
// loop
int n,  c= 0;
int s= 0;
cin>>n;
for (size_t i = 0; i < n; i++)
{
   if(i % 2 == 0){
     c++;
   }
  
}
s = s + c;
cout << "Sum of even numbers : "<<s<<endl;


//Loop prime
int N, I = 2, S=0;
cin>>N;
do
{
   if(N % I == 0) {
      S++;
   }
   I++;
} while (I < N);
if(S == 0)
{
     cout<<"Prime Number  : "<<I<<endl; 
}if(S != 0){
     cout<<"Not a Prime Number  :"<<I<<endl;
}
}