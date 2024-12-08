#include <iostream> 
#include <vector>
#include <string>

using namespace std; 

int main(){
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"}; 
    cout << "Enter a number (string or digit, e.g: zero or 1): ";
    string input;
    cin >> input;

    if (input.size() == 1){
        int num = input[0] - '0';
        cout << words[num] << endl;
    } else {
        for (int i = 0; i < words.size(); i++){
            if (input == words[i]){
                cout << i << endl;
                break;
            }
        }
    }

}