#include <iostream>
#include <vector>
#include <random>

using namespace std;

// use 4 letters rather than 4 digits 
bool bulls_and_cows(vector<char> gt, vector<char> pred){
    if (gt == pred){
        cout << "4 bulls!" << endl;
        return true;
    }
    int bulls = 0;
    int cows = 0;
    for(int i = 0; i < gt.size(); i++){
        if(gt[i] == pred[i]){
            bulls++;
        }else{
            for(int j = 0; j < pred.size(); j++){
                if(pred[i] == gt[j]){
                    cows++;
                    break; 
                }
            }
        }
    }
    cout << "Bulls: " << bulls << endl;
    cout << "Cows: " << cows << endl;
    return false; 
    
}



int main(){
    bool game_over = false;

    vector<char> gt; 
    for (int i = 0; i < 4; i++){
        char rand_char = 'a' + rand() % 26;
        gt.push_back(rand_char);
        cout << gt[i];
    }
    cout << endl; 

    while (!game_over){

        vector<char> pred;
        cout << "Enter your guess: ";
        for (int i = 0; i < 4; i++){
            char c; 
            cin >> c;
            pred.push_back(c);
        }
        game_over = bulls_and_cows(gt, pred);
    }
    return 0; 
}