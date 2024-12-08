#include <iostream> 
#include <vector>
#include <string> 
#include <sstream>


using namespace std; 

int main(){
    cout << "Type a series of numbers: "; 
    vector<int> numbers;
    string numbers_str;

    getline(cin, numbers_str); 

    istringstream iss(numbers_str);
    int num = -1;
    while (iss >> num){
        if (num > 0){
            numbers.push_back(num);
        }
    }

    // find the mode 
    vector<int> mode;
    int max_count = 0;

    for (int i = 0; i < numbers.size(); ++i){
        int count = 0;
        for (int j = i + 1; j < numbers.size(); ++j){
            if (numbers[i] == numbers[j]){
                ++count;
            }
        }

        if (count > max_count){
            max_count = count;
            mode.clear();
            mode.push_back(numbers[i]);
        } else if (count == max_count){
            mode.push_back(numbers[i]);
        }

    }

    cout << "The mode is: ";
    for (int m: mode){
        cout << m << " ";
    }
    cout << endl;


}