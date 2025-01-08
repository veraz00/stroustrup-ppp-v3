// permutation and combination 
/*
Ask user: give 2 digits 
- check if the digits are between 0 and 9
Ask user: permutation or combination

Calculate permutation 
Caclulate combination: based on permutation
*/


#include <iostream>
#include <algorithm> 

using namespace std; 

int factorial(int n){
    if (n == 0) return 1; 
    return n * factorial(n - 1);
}

int permutation(int a, int b){
    return factorial(a) / factorial(a - b);
}

int combination(int a, int b){
    return permutation(a, b) / factorial(b);
}

bool isAllDigits(string s){
    return all_of(s.begin(), s.end(), ::isdigit);
}


int main(){
    cout << "Enter 2 values: ";
    string a_s, b_s; 

    try {
        cin >> a_s >> b_s;
        if (!isAllDigits(a_s) | !isAllDigits(b_s)){
            throw runtime_error("Values must be digits");
        }
    }
    catch (exception& e){
        cerr << "Error: " << e.what() << endl;
        return 1; 
    }

    int a = stoi(a_s);
    int b = stoi(b_s);
    if (a < b){
        cerr << "Error: a must be greater than b" << endl;
        return 1;
    }

    while (true){

    cout << "Permutation or combination (p/c): ";
    char choice; 
    cin >> choice; 


    if (choice == 'p'){
        cout << "Permutation: " << permutation(a, b) << endl;
        break;
    }else if (choice == 'c'){
        cout << "Combination: " << combination(a, b) << endl;
        break;
    }
    else{
        cout << "Invalid choice" << endl;
    }

    }
    return 0;


}