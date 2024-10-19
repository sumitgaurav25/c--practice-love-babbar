#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch;
    //ch = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + i + j -1;
            cout << ch;
        }
        // ch = ch + i + j - 1;
        cout << endl;        
    }
}