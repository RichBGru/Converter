#include <iostream>
#include <string>
#include <vector>
#include "CurrencyClass.hpp"

using namespace std;

vector<string> name{"dollar", "euro", "rub", "yuan", "tenge"};

    Currency::Currency (double value, int type) {
        help_val = value * course[type];
        val = value;
        cur = type;
    }
    
    Currency Currency::convertation (CurrencyType type) {
        return Currency (help_val / course[type], type);
    }
    
    Currency& Currency::operator= (const double &other) {
        Currency help(0, this-> course[cur]);
        this-> val = help.val + other;
        return *this;
    }
    
    ostream& operator<< (ostream &out, const Currency &other) {
        out << other.val << " " << other.name[other.cur];
        return out;
    }
    
    istream& operator>> (istream &in, Currency &other) {
        in >> other.val;
        string currency;
        in >> currency;
        for (int i = 0; i <= sizeof(name); i++) {
            if (name[i] == currency) {
                other.cur = i;
                break;
            }
        }
        return in;
    }
    
    Currency Currency::operator+ (const Currency &other) {
        Currency temp(1,this-> course[cur]);
        temp.val = this->val + other.help_val / (this-> course[cur]);
        return temp;
    }
    
    Currency Currency::operator+ (const double other) {
        Currency help(1, this-> course[cur]);
        help.val = this-> val + other;
        return help;
    }
    
    Currency Currency::operator- (const Currency &other) {
        Currency temp(1,this-> course[cur]);
        temp.val = this->val - other.help_val / (this-> course[cur]);
        return temp;
    }
    
    Currency Currency::operator- (const double other) {
        Currency help(1, this-> course[cur]);
        help.val = this-> val - other;
        return help;
    }
    
    Currency Currency::operator/ (const Currency &other) {
        Currency temp(1,this-> course[cur]);
        temp.val = this->val / (other.help_val / (this-> course[cur]));
        return temp;
    }
    
    Currency Currency::operator/ (const double other) {
        Currency help(1, this-> course[cur]);
        help.val = this-> val / other;
        return help;
    }
    
    Currency Currency::operator* (const Currency &other) {
        Currency temp(1,this-> course[cur]);
        temp.val = this->val * (other.help_val / (this-> course[cur]));
        return temp;
    }
    
    Currency Currency::operator* (const double other) {
        Currency help(1,this-> course[cur]);
        help.val = this-> val * other;
        return help;
    }
    
    Currency& Currency::operator+= (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        this-> val += help.val;
        return *this;
    }
    
    Currency& Currency::operator+= (const double &other) {
        this-> val += other;
        return *this;
    }
    
    Currency& Currency::operator-= (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        this-> val -= help.val;
        return *this;
    }
    
    Currency& Currency::operator-= (const double &other) {
        this-> val -= other;
        return *this;
    }
    
    Currency& Currency::operator/= (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        this-> val /= help.val;
        return *this;
    }
    
    Currency& Currency::operator/= (const double &other) {
        this-> val /= other;
        return *this;
    }
    
    Currency& Currency::operator*= (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        this-> val *= help.val;
        return *this;
    }
    
    Currency& Currency::operator*= (const double &other) {
        this-> val *= other;
        return *this;
    }

    Currency::operator double() {
        return this-> val;
    }
    
    bool Currency::operator> (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        return (this-> val > help.val);
    }
    
    bool Currency::operator>= (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        return (this-> val >= help.val);
    }
    
    bool Currency::operator>= (const double &other) {
        return (this-> val >= other);
    }
    
    bool Currency::operator> (const double &other) {
        return (this-> val > other);
    }
    
    bool Currency::operator< (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        return (this-> val < help.val);
    }
    
    bool Currency::operator<= (const Currency &other) {
        Currency help(1, this-> course[cur]);
        help.val = other.help_val / course[cur];
        return (this-> val <= help.val);
    }
    
    bool Currency::operator<= (const double &other) {
        return (this-> val <= other);
    }
    
    bool Currency::operator< (const double &other) {
        return (this-> val < other);
    }
    
    Currency& Currency::operator++ () {
        this-> val += 1;
        this-> help_val += course[cur];
        return *this;
    }
    
    Currency& Currency::operator-- () {
        this-> val -= 1;
        this-> help_val -= course[cur];
        return *this;
    }
    
    Currency Currency::operator++ (int) {
        Currency help(this-> val, this-> cur);
        ++(*this);
        return help;
    }
    
    Currency Currency::operator-- (int) {
        Currency help(this-> val, this-> cur);
        --(*this);
        return help;
    }

