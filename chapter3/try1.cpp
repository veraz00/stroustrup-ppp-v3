#include <iostream> 

using namespace std; 

int main(){
    cout << "Type the amount of money: ";
    double amount;
    cin >> amount;

    cout << "Select a currency among y, e, p: " ;
    char currency;
    cin >> currency;    

    cout << "The amount of money is: " << amount << currency << endl;    
    
    double a_e = 0, a_p = 0, a_y = 0;

    if (currency == 'y'){
        a_e = amount * 0.85;
        a_p = amount * 0.73;
        cout << "The amount of money in euros is: " << a_e << endl;
        cout << "The amount of money in pounds is: " << a_p << endl;

    } else if (currency == 'e'){
        a_y = amount * 1.18;
        a_p = amount * 0.86;
        cout << "The amount of money in yen is: " << a_y << endl;
        cout << "The amount of money in pounds is: " << a_p << endl;

    } else if (currency == 'p'){
        a_y = amount * 1.37;
        a_e = amount * 1.16;
        cout << "The amount of money in yen is: " << a_y << endl;
        cout << "The amount of money in euros is: " << a_e << endl;
    } else {
        cout << "You have selected the wrong currency" << endl;
    };



    switch (currency){
        case 'y':
            a_e = amount * 0.85;
            a_p = amount * 0.73;
            cout << "The amount of money in euros is: " << a_e << endl;
            cout << "The amount of money in pounds is: " << a_p << endl;
            break;
        case 'e':
            a_y = amount * 1.18;
            a_p = amount * 0.86;
            cout << "The amount of money in yen is: " << a_y << endl;
            cout << "The amount of money in pounds is: " << a_p << endl;
            break;
        case 'p':
            a_y = amount * 1.37;
            a_e = amount * 1.16;
            cout << "The amount of money in yen is: " << a_y << endl;
            cout << "The amount of money in euros is: " << a_e << endl;
            break;
        default:
            cout << "You have selected the wrong currency" << endl;
            break;

    };

}