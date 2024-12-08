#include <iostream> 

using namespace std;


int main(){
    int low = 1; 
    int high = 100;

    int mid = 0; 
    char response; 

    cout << "Please think of a number between 1 and 100" << endl;

    for (int i = 0; i < 7; ++i){
        mid = (low + high) / 2;
        cout << "Is this number " << mid << "?";
        cin >> response;
        if (response == 'y'){
            cout << "The number you are thinking of is: " << mid << endl;
            break;
        } else if (response == 'n'){
            cout << "Is the number you are thinking of less than " << mid << "? (y/n): ";
            cin >> response;
            if (response == 'y'){
                high = mid;
            } else if (response == 'n'){
                low = mid;
            }
        }
    }

    // cout << "What number is in your mind?!" << endl;
}