#include<iostream>
using namespace std;

int main(){
    int cel, fah;
    cout << "enter temp in fahrenheit: " << endl;
    cin >> fah;

    cel = (5/9)*(fah - 32);

    cout << cel <<endl;  

}