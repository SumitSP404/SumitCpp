#include <iostream>
using namespace std;
int main(){
    cout<<"Namaste "<< endl;
    int x;
    cin>>x;
    int sum = 0;
    //int i = 2;
    for(int i =2; i<=x;i++){
        if((i%2)==0){
            cout<<i<<" ";
            sum = sum + i;
        }

    }
    cout<<"The even sum is:"<< sum ;
}