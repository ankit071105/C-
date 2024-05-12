// if conditional
#include<iostream>
using namespace std;
int main()
{

    int a;
cin>>a;
  int b;
cin>>b;
// greater smaller check
if(a > b) {
    cout<< "A is greater Number" <<endl;
} if(a == b){
    cout<< "Both Number are Equal" <<endl;
}
 if(b > a){
    cout<< "B is greater  Number" <<endl;
}
int c, d;
cin>>c;
cin>>d;
// positive negative check
if(c > 0){
    cout<< "Number is positive" <<endl;
 
}if(c == 0)
{  cout<< "Number is Zero" <<endl;
}if(c < 0) {
    cout<< "Number is Negative" <<endl;
}
// odd even check
if(d % 2 == 0) {
    cout<< "Number is even" <<endl;
}
if(d % 2 != 0) {
    cout<< "Number is odd" <<endl;
}

// Chaeracter is uppercase or lowercase or numeric
char ch;
cin>>ch;
if(isupper(ch)){
    cout << "Charcter is Upper Case";
}
if(islower(ch)){
    cout << "Charcter is Lower Case";
}if(isdigit(ch)){
     cout << "Charcter is Numeric";
}
char e;
cin>>e;
if (isupper(e) || islower(e) || isdigit(e)){
     cout << "Charcter : " << e << endl;
}

// Loop :-

//While
int n, i;
i = 1;
cin>>n;
while (i <= n)
{

    cout<< "Print all   numbers : " << i <<endl;
  i = i+1; 
}

int nn, ii;
ii = 1;
cin>>nn;
while (ii <= nn)
{
    if(ii % 2 == 0) {
            cout<< "Print all even  numbers : " << ii <<endl;
    }  
ii = ii + 1; 
  
}






















}






























