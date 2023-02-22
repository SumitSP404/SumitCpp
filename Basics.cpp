#include <iostream>
using namespace std;
int main()
{
    cout<<"Namaste "<< endl;

    int a = 123;
    cout<< a << endl;


    char ch = 98;
    cout<< ch << endl;

    int x;
    cin>>x;
    int i =1;
    int sum=0;
    while(i<=x){
        cout<< i <<" ";
        sum = sum + i;
        i = i+1;
  }
  cout<<'n/';
  cout<<"the sum is"<< sum;
}
