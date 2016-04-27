
#include "magic_item.h"

MagicItem::MagicItem(string name, int value, string description, int mana_required){
    name_=name;
    value_=value;
    description_=description;
    mana_required_=mana_required;
}

MagicItem::~MagicItem(){
}

void MagicItem::set_name(string name){
    name_=name;
}

void MagicItem::set_value(int value){
    value_=value;
}

void MagicItem::set_description(string description){
    description_=description;
}

void MagicItem::set_mana_required(int mana){
    mana_required_=mana;
}

string MagicItem::name()const{
    return name_;
}

int MagicItem::value()const{
    return value_;
}

string MagicItem::description()const{
    return description_;
}

int MagicItem::mana_required()const{
    return mana_required_;
}

string MagicItem::ToString(){
    stringstream mana, values;
    int manas=mana_required(), the_values=value();
    string descriptions=description(), names=name();
    mana<<manas;
    values<<the_values;
    string final = names+ ", $" + values.str() + ", " + description() + ", requires " + mana.str() + " mana";
    return final;
}