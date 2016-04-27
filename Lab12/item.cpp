#include "item.h"

Item::Item(string name, int value){
    name_=name;
    value_ = value;
}

string Item::name(){
    return name_;
}

Item::~Item(){
}

int Item::value(){
    return value_;
}

void Item::set_name(string new_name){
    name_=new_name;
}

void Item::set_value(int new_value){
    value_=new_value;
}

string Item::ToString(){
    int number = value();
    string names = name();
    stringstream value;
    value<<number;
    string out = names + ", $" + value.str();
    return out;
}