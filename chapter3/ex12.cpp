#include <iostream> 
#include <vector>

using namespace std; 

vector<int> primes = {2}; 

int main(){
    for (int i = 2; i <= 100; ++i){
        primes.push_back(i);
        for (int j = 0; j < primes.size()-1; ++j){
            if (i % primes[j] == 0){
                primes.pop_back();
                break; 
            }
        }
    }

    for (int pp: primes){
        cout << pp << " ";
    }
}