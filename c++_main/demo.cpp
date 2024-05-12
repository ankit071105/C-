#include<iostream>
using namespace std;
int main()
{
    cout<<"Namaste Dunia...."<<endl;
     cout<<"Welcome To Dsa" <<'\n';
       cout<<"Data Structure and Alogrithm (Dsa)\n";
       cout<<"Enjoying the course...."<<endl;
      int aa = 123;
      cout<< aa <<endl;
        float c = 091.221;
      cout<< c <<endl;
        double bb = 09.1221;
      cout<< bb <<endl;
      char d = 'A';
      cout<< d <<endl;
     bool e = true;
     cout<< e <<endl;
     string s = "Ankit";
     cout<< s <<endl;
     int f = sizeof(aa);
     cout<< "Size of a is :" << f <<endl;
     int g = sizeof(bb);
     cout<< "Size of b is :" << g <<endl;
     int h = sizeof(c);
     cout<< "Size of c is :" << h <<endl;
     int i = sizeof(d);
     cout<< "Size of d is :" << i <<endl;
     int j = sizeof(e);
     cout<< "Size of e is :" << j <<endl;
      int k = sizeof(s);
     cout<< "Size of s is :" << k <<endl;


     int ss = 'S';//converts charcter to Ascii code and then gives number output
     cout<< ss <<endl;
     char ch = 69;//converts number to Ascii code and then gives character output
     cout<< ch <<endl;
     int pp = -234;
     cout<< pp <<endl;
    unsigned   int p = -234; //this due to conversion in binary it gives vast output
     cout<< p <<endl;

     //Relational operators

    int a = 12;
    int b = 10;

    bool first = (a==b);
    cout<< first <<endl;
      bool second = (a>=b);
    cout<< second <<endl;
    bool third = (a<=b);
    cout<< third <<endl;
     bool fourth = (a!=b);
    cout<< fourth <<endl;
        bool fifth = (a>b);
    cout<< fifth <<endl;
        bool sixth = (a<b);
    cout<< sixth <<endl;


    int cc = a + b ;
    cout<< "Sum is :-> " << cc <<endl;
        int cd = a - b ;
    cout<< "Differnce is :-> " << cd <<endl;
        int ce = a * b ;
    cout<< "product is :-> " << ce <<endl;
        int cf = aa / b ;
    cout<< "Divident is :-> " << cf <<endl;
        int cg = a % b ;
    cout<< "Remainder is :-> " << cg <<endl;
 }