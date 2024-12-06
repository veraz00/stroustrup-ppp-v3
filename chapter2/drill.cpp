#include <iostream>

using namespace std; 

int main(){
    cout << "How are you? I am fine. I miss you.\n";
    string first_name = "???";
    cout << "Type your first name: "; 
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n";
    cout << "Type your friend's name: ";
    string friend_name = "f???";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";

    cout << "Type your friend's age: ";
    int age = -1;
    cin >> age;

    if (age <= 0 || age >= 110){
        cerr << "You're kidding!\n";
    }
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    cout << "Next year you will be " << age + 1 << ".\n";
    cout << "Yours scrincerely,\n\nVera\n";
}