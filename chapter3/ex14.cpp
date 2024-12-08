
#include <iostream> 
#include <vector>   


using namespace std; 

int main(){
    // find the first n prime 
    cout << "Enter the number of prime numbers you want to find: ";
    int n = 0; 
    cin >> n;

    vector<int> primes = {2};
    int i = primes.back() + 1; 

    while (primes.size() < n){

        for (int pp: primes){
            if (i % pp == 0){
                ++i; 
                continue; 
            }
        }

        primes.push_back(i);
        ++i; 

    }

    for (int pp: primes){
        cout << pp << " ";
    }
    cout << endl;
}