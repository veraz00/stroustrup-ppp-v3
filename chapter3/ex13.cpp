
// method: Sieve of Eratosthenes

#include <iostream> 
#include <vector>

using namespace std; 

int main(){
    int n = 100; 
    vector<bool> is_primer(n, true);     

    for (int i = 2; i < n; ++i){
        if (is_primer[i]){
            for (int j = i*i; j < n; j += i){
                is_primer[j] = false; 
            }
        }
    }

    for (int i = 2; i < n; ++i){
        if (is_primer[i]){
            cout << i << " ";
        }
    }
}