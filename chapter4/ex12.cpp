#include <iostream>
#include <vector>
#include <random>

using namespace std;


bool bulls_and_cows(vector<int> gt, vector<int> pred){
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

    vector<int> gt; 
    for (int i = 0; i < 4; i++){
        gt.push_back(rand() % 10);
        // cout << gt[i];
    }

    while (!game_over){

        vector<int> pred;
        cout << "Enter your guess: ";
        for (int i = 0; i < 4; i++){
            char c; 
            cin >> c;
            int n = c - '0';
            pred.push_back(n);
        }
        game_over = bulls_and_cows(gt, pred);
    }
    return 0; 
}