#include<iostream>
using namespace std;
int main()
{
    // first Pattern
int i = 1, n;
cin>>n;
while(i <= n){
    int j = 1;
    while(j <= n){
        cout<<" * ";
        j++;
    }
    cout<<endl;
    i++;
}

// Second Pattern
int a = 1, b;
cin>>b;
while(a <= b){
    int c = 1;
    while(c <= b){
cout<<" "<<a<<" ";
c++;
    }
    cout<<endl;
    a++;
}


}

