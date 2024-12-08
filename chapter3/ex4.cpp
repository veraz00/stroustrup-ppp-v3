#include <iostream> 
#include <vector> 
#include <algorithm>
#include <limits>

using namespace std; 

int main(){
    vector <double> temp_list;
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
    }

    sort(temp_list.begin(), temp_list.end());

    vector<double> temp_diff;
    for (int i = 0; i < temp_list.size() - 1; ++i){
        temp_diff.push_back(temp_list[i + 1] - temp_list[i]);
    }

    double temp_diff_sum = 0;
    for (double diff: temp_diff){
        temp_diff_sum += diff;
    }

    cout << "The smallest temperature difference is: " << *min_element(temp_diff.begin(), temp_diff.end()) << endl;
    cout << "The largest temperature difference is: " << *max_element(temp_diff.begin(), temp_diff.end()) << endl;

    cout << "The average temperature difference is: " << temp_diff_sum / temp_diff.size() << endl;


}