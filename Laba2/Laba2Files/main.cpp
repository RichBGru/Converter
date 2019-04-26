
#include <iostream>
#include <string>
#include <vector>
#include "CurrencyClass.hpp"

using namespace std;

int main() {
    Currency cur1(100, dollar);
    cout << cur1 << endl;
    Currency cur2 = cur1.convertation(rub) * 10.3;
    cout << cur2 << endl;
    Currency c3 = cur1*10.1;
    cout << c3 << endl;
    Currency lol(0,0);
    cin >> lol;
    cout << lol << endl;
    
    return 0;
}
