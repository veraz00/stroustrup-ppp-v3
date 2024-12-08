#include <iostream> 
#include <vector> 


using namespace std;

vector<string> names = {"rock", "paper", "scissors"};


int main(){
    string user_input = ""; 
    cout << "Enter rock, paper, or scissors: ";
    cin >> user_input;

    int random_index = rand() % names.size();
    string computer_input = names[random_index];

    cout << "Computer chose " << computer_input << endl;
    cout << "You chose " << user_input << endl;

    if (user_input == computer_input){
        cout << "It's a tie!" << endl;
    } else if (user_input == "rock" && computer_input == "scissors"){
        cout << "You win!" << endl;
    } else if (user_input == "scissors" && computer_input == "paper"){
        cout << "You win!" << endl;
    } else if (user_input == "paper" && computer_input == "rock"){
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }; 
    return 0; 
}
