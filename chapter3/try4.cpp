# include <iostream> 
using namespace std; 

int main(){
    string disliked = "Broccoli";

    while (cin){

        cout << "Type a word: ";
        string ss;
        cin >> ss;
        if (ss == disliked){
            cout << "BLEEP" << endl;
            break; 
        }
        cout << "You typed " << ss << endl;

    
    }
}