#include<iostream>
using namespace std;

int main(){
    cout<<"Namaste Duniya" << endl;

    int a = 5;
    char c = 'a';
    float f = 1.2;
    double d = 1.23;

    int size_a = sizeof(a);
    cout<< size_a <<endl;
    cout<< typeid(c).name() <<endl;
}