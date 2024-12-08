#include <iostream> 
#include <limits>
#include <sstream>
#include <vector> 
#include <algorithm>

using namespace std;


vector<string> units_list = {"cm", "in", "ft", "m"};
double sum = 0; 
vector<double> value_list;


int main(){

    while (true){
        double largest = 0;
        double smallest = numeric_limits<double>::max();



        string input1, input2; 
        double value1, value2; 
        string unit1, unit2;

        cout << "Type two values with units. units include cm, in, ft and m (e.g, 12cm, 12 cm, 5ft): "; 
        cin >> input1;
        // cout << "input1: " << input1 << endl;


        if (input1.find('|') != string::npos || "|" == input1) {
            cout << "Terminated" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            break;
        } 

        istringstream iss1(input1); 
        iss1 >> value1 >> unit1;
        if (find(units_list.begin(), units_list.end(), unit1) == units_list.end()){
            cout << "Invalid unit. Please enter cm, in, ft or m" << endl;
            continue;
        }
        cin >> input2; 
        // cout << "input2: " << input2 << endl;   

       
        if (input2.find('|') != string::npos || "|" == input2) {
            cout << "Terminated" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            continue; 
        } 

        // Parse the second input
        istringstream iss2(input2);
        iss2 >> value2 >> unit2;
        if (find(units_list.begin(), units_list.end(), unit2) == units_list.end()){
            cout << "Invalid unit. Please enter cm, in, ft or m" << endl;
            continue;
        }

        cout << "First value: " << value1 << " " << unit1 << endl;
        cout << "Second value: " << value2 << " " << unit2 << endl;


        // Convert the units to meters
        double value1_m = 0, value2_m = 0;
        for (string unit : units_list){
            if (unit1 == unit){
                if (unit == "cm"){
                    value1_m = value1 / 100;
                } else if (unit == "in"){
                    value1_m = value1 * 0.0254;
                } else if (unit == "ft"){
                    value1_m = value1 * 0.3048;
                } else if (unit == "m"){
                    value1_m = value1;
                }
            }

            if (unit2 == unit){
                if (unit == "cm"){
                    value2_m = value2 / 100;
                } else if (unit == "in"){
                    value2_m = value2 * 0.0254;
                } else if (unit == "ft"){
                    value2_m = value2 * 0.3048;
                } else if (unit == "m"){
                    value2_m = value2;
                }
            }
        }

        value_list.push_back(value1_m);
        value_list.push_back(value2_m);


        sum += value1_m;
        sum += value2_m;
        cout << "The sum of the values in meters is: " << sum << "m" << endl;

        double larger = value1_m > value2_m ? value1_m : value2_m;
        double smaller = value1_m < value2_m ? value1_m : value2_m;
        cout << "The larger value is: " << larger << "m" << endl;
        cout << "The smaller value is: " << smaller << "m" << endl;


        if (abs(value1_m - value2_m) < 1.0/100){
            cout << "The values are almost equal" << endl;
        }

        largest = larger > largest ? larger : largest;
        smallest = smaller < smallest ? smaller : smallest;
        cout << "The largest value so far is: " << largest << "m" << endl;
        cout << "The smallest value so far is: " << smallest << "m" << endl;


    }

    sort(value_list.begin(), value_list.end());
    cout << "The values in meters are: "; 

    for (double value : value_list){
        cout << value << "m ";
    }
    cout << endl;
    return 0; 
}