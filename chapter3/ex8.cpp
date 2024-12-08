#include <iostream> 
#include <limits>
#include <sstream>
#include <string>
#include <vector>

using namespace std; 

vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"}; 

int main(){
    while (true){

        cout << "Enter 2 numbers and 1 operator: "; 
        string input;
        getline(cin, input); 

        if (input.find('|') != string::npos || "|" == input){
            cout << "Terminated" << endl;
            break;
        }
        // double num1, num2;
        string num1_str, num2_str; 
        double num1 = -1, num2 = -1;
        char op;

    
        istringstream iss(input);
        iss >> num1_str >> num2_str >> op;
        
        if (iss.fail()){
            cout << "Invalid input" << endl;
            continue;   
        }

        for (int i = 0; i < words.size(); i++){
            if (num1_str == words[i]){
                num1 = i;
            }
            if (num2_str == words[i]){
                num2 = i;
            }
        }

        if (num1 == -1){
            try {
                num1 = stod(num1_str);
            } catch (const invalid_argument& ia){
                cout << "Invalid input" << endl;
                continue;
            }
        }

        if (num2 == -1){
            try {
                num2 = stod(num2_str);
            } catch (const invalid_argument& ia){
                cout << "Invalid input" << endl;
                continue;
            }
        }



        switch (op){
            case '+':
                cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
                break;
            case '-':
                cout << "The minus of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
                break;
            case '*':
                cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl; 
            case '/':
                cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl; 
            }
        }
}
