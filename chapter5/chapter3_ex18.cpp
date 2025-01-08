#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std; 

class Name_value {
    public:
        string name;
        double value;
        Name_value(string n, double v): name(n), value(v) { }
        Name_value(): name("xxx"), value(0) { }
}; 


int main(){
    // enter the name-value pairs 
    cout << "Enter the name-value pairs: ";
    string input_str = ""; 

    getline(cin, input_str);

    // parse the input string
    vector<Name_value> names;

    istringstream iss(input_str);
    
    string temp_name; 
    int temp_value;

    
    while(iss >> temp_name >> temp_value){
        for (auto nn: names){
            if (nn.name == temp_name){
                cout << "Error: duplicate name" << endl;
                break;
            }
        }
        names.push_back(Name_value(temp_name, temp_value));
    };

    // print the name-value pairs
    for(int i = 0; i < names.size(); i++){
        cout << names[i].name << " " << names[i].value << endl;
    };

    // ex19 && ex20

    string search_name = " ";
    while (search_name != "q"){
        cout << "Enter a name/value to search for (q for exit): ";
        cin >> search_name;
        if (search_name == "q") break;
        bool found = false;
        if (isdigit(search_name[0])){
            double search_value = stod(search_name);
            
            for (auto nn: names){
                if (nn.value == search_value){
                    found = true;
                    cout << "The name of " << search_name << " is " << nn.name << endl;
                    break;
                }
            }
        }
        else {
            for (auto nn: names){
                if (nn.name == search_name){
                    found = true;
                    cout << "The value of " << search_name << " is " << nn.value << endl;
                    break;
                }
            }
        }

        if (!found){
            cout << "Name/value not found" << endl;
        }
        found = false;
    }


    return 0; 
}