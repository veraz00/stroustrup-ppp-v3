
# include <iostream>
# include <string>
# include <vector>
# include <bitset> 

using namespace std;

void error(string s)
{
    throw runtime_error(s);
}; 


int random_int(int low, int high)
{
    if (low >= high) error("random_int: low >= high");
    return low + rand() % (high - low);
}

int random_int(int high)
{
    return random_int(0, high);
}

string random_letters(int n, int m)
{
    if (n <= 0) error("random_letters: n <= 0");
    if (m <= 0) error("random_letters: m <= 0");
    string s(random_int(n, m), 'x'); // s is a string of x's of length n to m
    cout << "s: " << s << endl;
    for (char& ch : s){
        ch = static_cast<char>(random_int('a', 'z'));
    }
    return s; 
}


int main()
{

    try {
        string ss = random_letters(5, 10);
        cout << "ss: " << ss << endl;
        return 0; 
    }
    catch (runtime_error& e){
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...){
        cerr << "Unknown error" << endl;
        return 2;
    }
}