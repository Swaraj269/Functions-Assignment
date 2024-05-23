#include <iostream>
using namespace std;
void odd(int x, int y){
    for(int i = x+1; i<y; i++){
        if(i%2!= 0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a,b;
    cout<< "Enter the 1st number: ";
    cin>>a;
    cout<< "Enter the 2nd number: ";
    cin>>b;
    odd(a,b);
    return 0;
}