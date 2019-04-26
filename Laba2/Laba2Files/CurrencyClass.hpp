
#ifndef CurrencyClass_hpp
#define CurrencyClass_hpp

#include <stdio.h>
using namespace std;

enum CurrencyType {dollar , euro, rub, yuan, tenge};

class Currency {
private:
    
    vector<string> name{"dollar", "euro", "rub", "yuan", "tenge"};
    vector<double> course{65.83, 74.87, 1, 9.82, 0.18};
    double val;
    double help_val;
    int cur;
    
public:
    
    Currency (double value, int type);
    Currency convertation (CurrencyType type);
    Currency& operator= (const double &other);
    friend ostream& operator<< (ostream &out, const Currency &other);
    friend istream& operator>> (istream &in, Currency &other);
    Currency operator+ (const Currency &other);
    Currency operator+ (const double other);
    Currency operator- (const Currency &other);
    Currency operator- (const double other);
    Currency operator/ (const Currency &other);
    Currency operator/ (const double other);
    Currency operator* (const Currency &other);
    Currency operator* (const double other);
    Currency& operator+= (const Currency &other);
    Currency& operator+= (const double &other);
    Currency& operator-= (const Currency &other);
    Currency& operator-= (const double &other);
    Currency& operator/= (const Currency &other);
    Currency& operator/= (const double &other);
    Currency& operator*= (const Currency &other);
    Currency& operator*= (const double &other);
    bool operator> (const Currency &other);
    bool operator> (const double &other);
    bool operator>= (const Currency &other);
    bool operator>= (const double &other);
    bool operator< (const Currency &other);
    bool operator< (const double &other);
    bool operator<= (const Currency &other);
    bool operator<= (const double &other);
    operator double();
    Currency& operator++ ();
    Currency& operator-- ();
    Currency operator++ (int);
    Currency operator-- (int);
    
    
};

#endif /* CurrencyClass_hpp */
