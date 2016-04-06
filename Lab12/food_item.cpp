
#include "food_item.h"

void FoodItem::Constructor(string name, int value, int calories, string unit_of_measure, double units){
    name_=name;
    value_=value;
    calories_=calories;
    unit_of_measure_=unit_of_measure;
    units_=units;
}

FoodItem::~FoodItem(){
}

void FoodItem::setName(string name){
    name_=name;
}

void FoodItem::setValue(int value){
    value_=value;
}

void FoodItem::setCalories(int calories){
    calories_=calories;
}

void FoodItem::setUnitOfMeasure(string unit_measure){
    unit_of_measure_=unit_measure;
}

void FoodItem::setUnits(double units){
    units_=units;
}

string FoodItem::getName(){
    return name_;
}

int FoodItem::getValue(){
    return value_;
}

int FoodItem::getCalories(){
    return calories_;
}

string FoodItem::getUnitMeasure(){
    return unit_of_measure_;
}

double FoodItem::getUnits(){
    return units_;
}

string FoodItem::ToString(){
    stringstream units, calories, values;
    int calorie=getCalories();
    int value=getValue();
    double unit = getUnits();
    string unit_of_measure=getUnitMeasure(), name=getName();
    units<<unit;
    units.setf(ios::fixed|ios::showpoint);
    units.precision(2);
    calories<<calorie;
    values<<value;
    string final = name + ", $" + values.str() + ", " + units.str() + " " + unit_of_measure + ", " + calories.str() + " calories";
    return final;
}