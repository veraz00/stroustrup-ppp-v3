#include <iostream> 
#include <map>
#include <string>
#include <vector>

using namespace std; 

const map<string, string> daySynonyms = {
    {"Monday", "Monday"}, {"Mon", "Monday"}, {"monday", "Monday"},
    {"Tuesday", "Tuesday"}, {"Tue", "Tuesday"}, {"tuesday", "Tuesday"},
    {"Wednesday", "Wednesday"}, {"Wed", "Wednesday"}, {"wednesday", "Wednesday"},
    {"Thursday", "Thursday"}, {"Thu", "Thursday"}, {"thursday", "Thursday"},
    {"Friday", "Friday"}, {"Fri", "Friday"}, {"friday", "Friday"},
    {"Saturday", "Saturday"}, {"Sat", "Saturday"}, {"saturday", "Saturday"},
    {"Sunday", "Sunday"}, {"Sun", "Sunday"}, {"sunday", "Sunday"}
};


bool isValidDay(string day){
    return daySynonyms.find(day) != daySynonyms.end();
}

int main(){
    vector<vector<int>> daysOfWeek(7); 
    int rejected_values = 0; 

    string day, temp; 
    int value; 
    cout << "Enter day and value: ";


    while (cin >> day){
        if (day == "exit"){
            break;
        }
        cin >> value;

        cout << day << " " << value << endl;

        if (isValidDay(day)){
            string canonicalDay = daySynonyms.at(day);
            int dayIndex = distance(daySynonyms.begin(), daySynonyms.find(canonicalDay));
            daysOfWeek[dayIndex].push_back(value);

        }else{
            rejected_values++;
        }
    }


    for (int i = 0; i < 7; i++){
        cout << "Day " << i << ": ";
        int sum_d = 0; 
        for (int j = 0; j < daysOfWeek[i].size(); j++){
            
            cout << daysOfWeek[i][j] << " ";
            sum_d += daysOfWeek[i][j];
        }
        cout << "Sum: " << sum_d << endl;

    }
    return 0; 
}