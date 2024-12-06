

#include <iostream> 
using namespace std;

int main(){

    cout << "Enter 3 integers: "; 
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    cin >> val1 >> val2 >> val3;
    int larger = 0; 
    int smaller = 0;
    int middle = 0;
    (val1 > val2 ? (val1 > val3 ? larger = val3:larger = val3):(val2 > val3 ? larger = val2: larger = val3));
    (val1 < val2 ? (val1 < val3 ? smaller = val1: smaller = val3):(val2 < val3 ? smaller = val2: smaller = val3));

    middle = (val1 + val2 + val3) - (larger + smaller);

    cout << "The input value from large to small: " << larger << ", " << middle << ", " << smaller << endl;
}