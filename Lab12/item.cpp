#include "item.h"

void Item::setValues(string name, int value){
    name_=name;
    value = value_;
}

string Item::getName(){
    return name_;
}

Item::~Item(){
}

int Item::getValue(){
    return value_;
}

string Item::ToString(){
    int number = getValue();
    string name = getName();
    stringstream value;
    value<<number;
    string out = name + "," + value.str();
    return out;
}