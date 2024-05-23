#include<iostream>
using namespace std;
void area(int x){
    cout<< "The area of the circle is: "<<3.14*x*x<<endl;
    return;
}
int main(){
    int r;
    cout<< "Enter the radius of the circle: ";
    cin>>r;
    area(r);
    return 0;
}