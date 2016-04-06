#ifndef LAB_H
#define LAB_H
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
    void Constructor(string name = "fooditem", int value = 0, int calories = 0, string unit_of_measure = "nounits", double units = 0.0);
    ~FoodItem();
    string getName();
    int getValue();
    int getCalories();
    double getUnits();
    string getUnitMeasure();
    void setName(string new_name);
    void setValue(int new_number);
    void setCalories(int calories);
    void setUnitOfMeasure(string unit_measure);
    void setUnits(double new_units);
    string ToString();
    
};

#endif