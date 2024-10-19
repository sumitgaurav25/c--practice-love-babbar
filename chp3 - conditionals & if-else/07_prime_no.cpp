#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a number" <<endl;
    cin >> n;

    int i = 2;
    while(i<n){
        if (n%i == 0)
        {
            cout << " is not a prime number" << endl;          
        }
        else{
            cout << "prime " << endl;
        }
        i = i+1;
        
    }
}