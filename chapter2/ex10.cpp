#include <iostream> 
using namespace std;


int main(){
    cout << "input an operation followed by 2 operants: "; 
    string operation = "";
    double operant1 = 0.0;
    double operant2 = 0.0;

    cin >> operation >> operant1 >> operant2;

    double result = 0.0;

    if (operation == "+" or operation == "plus"){

            result = operant1 + operant2;
    }
    else if (operation == "-" or operation == "minus"){
            result = operant1 - operant2;
    }
    else if (operation == "*" or operation == "mul"){
            result = operant1 * operant2;
    }
    else if (operation == "/" or operation == "div"){
            result = operant1 / operant2;
    }
    cout << "The result is " << result << endl;
}