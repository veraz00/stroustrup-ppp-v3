#include <iostream> 
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std; 

int main(){
    // find the min, max, and mode of a string 

    cout << "Enter a series of strings: "; 
    string input_str = ""; 
    getline(cin, input_str);

    vector<string> words;

    istringstream iss(input_str);
    string word;
    while(iss >> word){
        words.push_back(word);
    }

    sort(words.begin(), words.end());

    vector<string> mode_list;
    int mode_count = 1;
    int count = 1;

    for(int i = 1; i < words.size(); i++){
        if(words[i] == words[i-1]){
            count++;
        }else{
            count = 1;
        }

        if(count > mode_count){
            mode_list.clear();
            mode_list.push_back(words[i]);
            mode_count = count;
        }
        else if(count == mode_count){
            mode_list.push_back(words[i]);
        }
    }

    cout << "Min: " << words[0] << endl;
    cout << "Max: " << words[words.size()-1] << endl;
    cout << "Mode: ";
    for(int i = 0; i < mode_list.size(); i++){
        cout << mode_list[i] << " ";
    }
    cout << endl;
}