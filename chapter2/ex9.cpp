

# include <iostream> 
using namespace std;

string num_to_string(int num){
    string num_string = "";

    if (num == 0){
        num_string = "zero";         
    }
    else if (num == 1){
        num_string = "one"; 
    }
    else if (num == 2){
        num_string = "two"; 
    }
    else if (num == 3){
        num_string = "three"; 
    }
    else if (num == 4){
        num_string = "four"; 
    }
    else if (num == 5){
        num_string = "five"; 
    }
    else if (num == 6){
        num_string = "six"; 
    }
    else if (num == 7){
        num_string = "seven"; 
    }
    else if (num == 8){
        num_string = "eight"; 
    }
    else if (num == 9){
        num_string = "nine"; 
    }
    else {
        num_string = "not a number I know"; 
    }
    return num_string;
}; 


int main(){
    cout << "Enter numbers: ";  
    int num = 0;
    string num_string = ""; 
    cin >> num;
    while (num > 0){
        num_string = num_string + " " + num_to_string(num % 10);
        num /= 10;
    }
    cout << num_string << endl;
}
