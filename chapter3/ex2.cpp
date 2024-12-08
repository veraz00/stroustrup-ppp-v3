#include <iostream> 

using namespace std;

int main(){
    cout << "Type a string: ";
    string s;
    cin >> s;

    for (char c: s){
        cout << "char(" << c << ") ";
        cout << "value(" << int(c) << ")\n";
    }
}