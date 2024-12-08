#include <iostream> 
#include <limits>


using namespace std;


int main(){
    while (cin){
        double val1, val2;

        double smallest = float('inf'); 
        double largest = float('-inf');




        cout << "Type two doubles: ";
        cin >> val1;

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            char ch;
            cin >> ch;
            if (ch == '|') {
                cout << "Terminated" << endl;
                break;
            } else {
                cout << "Invalid input. Please enter integers or '|' to terminate." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input
                continue;
            }
        }

        cin >> val2;

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            char ch;
            cin >> ch;
            if (ch == '|') {
                cout << "Terminated" << endl;
                break;
            } else {
                cout << "Invalid input. Please enter integers or '|' to terminate." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the input
                continue;
            }
        }



        // cout << "Two values: " << val1 << " " << val2 << endl;
        if (val1 != val2){
            double smaller = val1 < val2 ? val1 : val2;
            double larger = val1 > val2 ? val1 : val2;
            cout << "The smaller value is : " << smaller << endl; 
            cout << "The larger value is : " << larger << endl;
            
            smallest = smaller < smallest ? smaller : smallest;
            largest = larger > largest ? larger : largest;

            if (abs(val1 - val2) < 1.0/100){
                cout << "The numbers are almost equal" << endl;
            }
        }
        else {
            cout << "The numbers are equal" << endl;
        }
    }
}


