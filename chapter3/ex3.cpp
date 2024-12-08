#include <iostream> 
#include <vector>
#include <algorithm>
#include <limits>


using namespace std; 

int main(){
    vector<double> temp_list; 
    int count = 0;
    while (cin){
        double temp = 0; 
        cin >> temp;

        if (cin.fail()){
            cin.clear(); 
            char ch; 
            cin >> ch;
            if (ch == '|'){
                cout << "Terminated" << endl;
                break;
            } else {
                cout << "Invalid input. Please enter integers or '|' to terminate." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
        }
        temp_list.push_back(temp);
        ++count; 
    }; 

    sort(temp_list.begin(), temp_list.end());

    if (count % 2 == 0){
        cout << "The median is: " << (temp_list[count/2] + temp_list[count/2 - 1]) / 2 << endl;
    } else {
        cout << "The median is: " << temp_list[count/2] << endl;
    }


    
}