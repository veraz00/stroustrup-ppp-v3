#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std; 

int main(){
    // enter the name-value pairs 
    cout << "Enter the name-value pairs: ";
    string input_str = ""; 

    getline(cin, input_str);

    // parse the input string
    vector<string> names;
    vector<int> values;

    istringstream iss(input_str);
    
    string temp_name; 
    int temp_value;

    while(iss >> temp_name >> temp_value){
        if (find(names.begin(), names.end(), temp_name) != names.end()){
            cout << "Error: duplicate name" << endl;
            break;
        }
        names.push_back(temp_name);
        values.push_back(temp_value);
    };

    // print the name-value pairs
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << " " << values[i] << endl;
    };

    // ex19 && ex20

    cout << "Enter a name/value to search for: ";
    string search_name;
    cin >> search_name;

    if (isdigit(search_name[0])){
        int index = find(values.begin(), values.end(), stoi(search_name)) - values.begin();
        if (index < values.size()){
            cout << "The name of " << search_name << " is " << names[index] << endl;
        }
        else {
            cout << "Value not found" << endl;
        }
    }
    else {
        int index = find(names.begin(), names.end(), search_name) - names.begin();
        if (index < names.size()){
            cout << "The value of " << search_name << " is " << values[index] << endl;
        }
        else {
            cout << "Name not found" << endl;
        }
    }

    return 0; 
}