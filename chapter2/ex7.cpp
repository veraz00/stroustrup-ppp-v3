
#include <iostream> 
using namespace std;

int main(){

    cout << "Enter 3 strings: "; 
    string val1 = "";
    string val2 = "";
    string val3 = "";

    cin >> val1 >> val2 >> val3;
    string larger = ""; 
    string smaller = "";
    string middle = "";
    (val1 > val2 ? (val1 > val3 ? larger = val1:larger = val3):(val2 > val3 ? larger = val2: larger = val3));
    (val1 < val2 ? (val1 < val3 ? smaller = val1: smaller = val3):(val2 < val3 ? smaller = val2: smaller = val3));

    (larger != val1 && smaller != val1 ? middle = val1: (larger != val2 && smaller != val2 ? middle = val2: middle = val3));
    cout << "The input value from large to small: " << larger << ", " << middle << ", " << smaller << endl;
}