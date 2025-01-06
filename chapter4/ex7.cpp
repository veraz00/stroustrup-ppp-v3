# include <iostream> 
# include <cmath>
# include <string>
# include <stdexcept>

using namespace std;

int main(){
    char a_char=' ', b_char = ' ', c_char = ' ';
    int a=0, b=0, c=0;
    cout << "Enter a, b, c: ";
    cin >> a_char >> b_char >> c_char;


    if (!isdigit(a_char) || !isdigit(b_char) || !isdigit(c_char)){
        cout << "Invalid input" << endl;
        return 0; 
    }

    a = a_char - '0';
    b = b_char - '0';
    c = c_char - '0';


    int mid = b^2 - 4*a*c;
    if (mid > 0){
        cout << "Roots are real and different" << endl;
        int x1 = (-b + sqrt(mid)) / 2*a;
        int x2 = (-b - sqrt(mid)) / 2*a;
        cout << "x1 = " << x1 << " x2 = " << x2 << endl;
        
    } else if (mid == 0){
        cout << "Roots are real and same" << endl;
        int x = -b / 2*a;
        cout << "x = " << x << endl;

    } else {
        cout << "Roots are complex" << endl;
        int real = -b / 2*a;
        int img = sqrt(-mid) / 2*a;
        cout << "x1 = " << real << " + " << img << "i" << endl;
        cout << "x2 = " << real << " - " << img << "i" << endl;

    }


}