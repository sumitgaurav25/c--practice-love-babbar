#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "enter a chracter: "<< endl;
    cin >> ch;

    if (ch <= 122 && ch >= 97)
    {
        cout << "this is a lower case letter" << endl;
    }
    else if (ch >= 65 && ch <= 89)
    {
        cout << "this is a upper case letter" <<endl;
    }
    else{
        cout << "this is numeric" <<endl;
    }
    
    

}