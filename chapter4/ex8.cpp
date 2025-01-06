# include <iostream>
# include <vector>
# include <string>
# include <sstream>
# include <algorithm>


using namespace std;


int main(){
    cout << "Please eneter the number of values you want to sum: "; 
    char n_char = ' ';
    cin >> n_char;

    if (!isdigit(n_char)){
        cout << "Invalid input" << endl;
        return 0;
    }
    int n = n_char - '0';

    cout << "Please enter some integers (press '|' to stop): ";
    vector<int> values;
    string s; 
    cin.ignore(); 
    getline(cin, s); 
    stringstream ss(s);
    string val_string;

    while (ss >> val_string){
        if (val_string == "|") break;
        if (!all_of(val_string.begin(), val_string.end(), ::isdigit)){
            cout << "Invalid input" << endl;
            return 0;
        }
        int val = stoi(val_string);
        values.push_back(val);
    }

    
    cout << "The sum of the first " << n << " numbers ( ";

    int sum = 0;

    for (int i=0; i<n; i++){
        cout << values[i] << " ";
        sum += values[i];
    }
    cout << ") is " << sum << endl;
    return 0;
}


