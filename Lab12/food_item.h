#ifndef LABS_H
#define LABS_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
using std::string;
using std::ostream;
using std::setfill;
using std::setw;
using std::stringstream;
using namespace std;

class FoodItem{
    
    private:
    int calories_, value_;
    string unit_of_measure_, name_;
    double units_;
    
    public:
    FoodItem(string name = "fooditem", int value = 0, int calories = 0, string unit_of_measure = "nounits", double units = 0.0);
    ~FoodItem();
    string name();
    int value();
    int calories();
    double units();
    string unit_of_measure();
    void set_name(string new_name);
    void set_value(int new_number);
    void set_calories(int calories);
    void set_unit_of_measure(string unit_measure);
    void set_units(double new_units);
    string ToString();
    
};

#endif