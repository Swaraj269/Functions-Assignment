#include <iostream>
using namespace std;
void count(int x){
    int a =1;
    int count = 0;
    while(x>0){
        a = x%10;
        cout<< a*a<< " ";
        count++;
        x/=10;
    }
    cout<< endl;
    cout<< "Number of digits: "<< count<< endl;
}
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    count(n);
    return 0;
}