#include <iostream>
using namespace std; 

int main(){
    int prev = 1; 

    for (int i = 0; i < 10; ++i){
        cout << i << "th iteration is " << prev << endl;
        prev *= 2; 
    }

}