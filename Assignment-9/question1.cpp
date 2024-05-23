#include <iostream>
using namespace std;
void square(int x){
    for(int i=1; i<=x; i++){
        cout<< i*i<< " ";
    }
}
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    square(n);

    return 0;
}