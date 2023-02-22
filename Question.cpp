#include <iostream>
using namespace std;

int main()
{
    /*int a =2;
    int b =a+1;
    if((a=3)==b){
        cout<<a;
        cout<<"This one";
    }
    else{
        cout<<a+1;
        cout<<"else condition";
    */
    int x;
    cin >> x;
    int sum = 0;
    int i = 2;
    while (i <= x)
    {
        if ((i % 2) == 0)
        {

            cout << i << " ";
            sum = sum + i;
            // i= i + 1;
        }
        i = i + 1;
        // cout<<"The even sum is:"<< sum ;
    }
    cout << "The even sum is:" << sum;
}