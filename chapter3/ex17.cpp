#include <iostream>
#include <cmath>

using namespace std; 

int main(){
    // solve a quadratic equation 
    double a, b, c;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    if (cin.fail()){
        cout << "Invalid input" << endl;
        return 1;
    }

    double discriminant = b*b - 4*a*c;

    if (discriminant < 0){
        cout << "No real roots" << endl;
    }else if (discriminant == 0){
        cout << "One real root: " << -b/(2*a) << endl;
    }else{
        cout << "Two real roots: " << (-b + sqrt(discriminant))/(2*a) << " and " << (-b - sqrt(discriminant))/(2*a) << endl;
    }

}