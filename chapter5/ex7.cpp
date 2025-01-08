#include <iostream>
#include <vector>
using namespace std; 


int main(){
    vector<string> units = {"one", "ten", "hundred", "thousand", "ten thousand", "hundred thousand", "million", "ten million", "hundred million", "billion", "ten billion", "hundred billion", "trillion", "ten trillion", "hundred trillion"};
    cout << "Enter a value: "; 
    string value_s;
    cin >> value_s;

    cout << value_s << " is "; 

    string output = "";
    int j = value_s.size(); 
    for (int i = 0; i < value_s.size(); ++i){
        int cur = value_s[i] - '0';
        cout << cur << " " << units[i]; 
        if (cur > 1){
            cout << "s ";  
        }
        else {
            cout << " ";
        }

        if (i > 0){
            cout << "and "; 
        }
        

    }


}