#include <iostream>

using namespace std; 

int main(){

    cout << "Input an integer: "; 
    int val1 = 0; 
    cin >> val1;

    (val1 % 2 == 0 ? cout << val1 << " is an even number." << endl: cout << val1 << " is an odd number." << endl);
}