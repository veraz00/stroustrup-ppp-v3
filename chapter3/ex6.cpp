#include <iostream> 
#include <limits>
#include <sstream>
#include <string>

using namespace std; 

int main(){
    while (true){

        cout << "Enter 2 numbers and 1 operator: "; 
        string input;
        getline(cin, input); 

        if (input.find('|') != string::npos || "|" == input){
            cout << "Terminated" << endl;
            break;
        }
        double num1, num2;
        char op;

        istringstream iss(input);
        iss >> num1 >> num2 >> op;
        
        if (iss.fail()){
            cout << "Invalid input" << endl;
            continue;   
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
