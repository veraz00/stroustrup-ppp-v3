


using namespace std; 
#include <iostream>

int main(){
    cout << "Please enter your first name and age\n";
    string first_name = "???"; 
    double age = -1; 
    cin >> first_name >> age;
    double age_month = age * 12; 

    cout << "Hello, " << first_name << " (age " << age_month << " months)\n";
}