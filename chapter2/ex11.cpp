#include <iostream> 
using namespace std;

int main(){
    cout << "How many pennies do you have ? "; 
    int pennies = 0;
    cin >> pennies;
    cout << "You have " << pennies << (pennies == 1 ? " penny." : " pennies.") << endl;

    cout << "How many nickels do you have ? ";
    int nickels = 0;
    cin >> nickels;
    cout << "You have " << nickels << (nickels == 1 ? " nickel." : " nickels.") << endl;


    cout << "How mnay dimes do you have ? ";
    int dimes = 0;
    cin >> dimes;
    cout << "You have " << dimes << (dimes == 1 ? " dime." : " dimes.") << endl;


    cout << "How many quarters do you have ? ";
    int quarters = 0;
    cin >> quarters;
    cout << "You have " << quarters << (quarters == 1 ? " quarter." : " quarters.") << endl;


    cout << "How many half dollars do you have ? ";
    int half_dollars = 0;
    cin >> half_dollars;
    cout << "You have " << half_dollars << (half_dollars == 1 ? " half dollar." : " half dollars.") << endl;


    cout << "How many dollars do you have ? ";
    int dollars = 0;
    cin >> dollars;
    cout << "You have " << dollars << (dollars == 1 ? " dollar." : " dollars.") << endl;


    double total = pennies * 0.01 + nickels * 0.05 + dimes * 0.1 + quarters * 0.25 + half_dollars * 0.5 + dollars;
    double total_cents = total * 100;

    cout << "The value of all of your coins is " << total << " dollars" << "(" << total_cents << " cents)." << endl;
}