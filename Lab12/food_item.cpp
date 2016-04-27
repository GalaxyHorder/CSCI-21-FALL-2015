
#include "food_item.h"

FoodItem::FoodItem(string name, int value, int calories, string unit_of_measure, double units){
    name_=name;
    value_=value;
    calories_=calories;
    unit_of_measure_=unit_of_measure;
    units_=units;
}

FoodItem::~FoodItem(){
}

void FoodItem::set_name(string name){
    name_=name;
}

void FoodItem::set_value(int value){
    value_=value;
}

void FoodItem::set_calories(int calories){
    calories_=calories;
}

void FoodItem::set_unit_of_measure(string unit_measure){
    unit_of_measure_=unit_measure;
}

void FoodItem::set_units(double units){
    units_=units;
}

string FoodItem::name(){
    return name_;
}

int FoodItem::value(){
    return value_;
}

int FoodItem::calories(){
    return calories_;
}

string FoodItem::unit_of_measure(){
    return unit_of_measure_;
}

double FoodItem::units(){
    return units_;
}

string FoodItem::ToString(){
    stringstream the_units, the_calories, the_values;
    int calorie=calories();
    int values=value();
    double unit = units();
    string unit_of_measures=unit_of_measure(), names=name();
    the_units.setf(ios::fixed|ios::showpoint);
    the_units.precision(2);
    the_units<<unit;
    the_calories<<calorie;
    the_values<<values;
    string final = names + ", $" + the_values.str() + ", " + the_units.str() + " " + unit_of_measures + ", " + the_calories.str() + " calories";
    return final;
}