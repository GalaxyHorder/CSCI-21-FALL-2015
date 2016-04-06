
#include "magic_item.h"

void MagicItem::Constructor(string name, int value, string description, int mana_required){
    name_=name;
    value_=value;
    string description_=description;
    int mana_required_=mana_required;
}

MagicItem::~MagicItem(){
}

void MagicItem::setName(string name){
    name_=name;
}

void MagicItem::setValue(int value){
    value_=value;
}

void MagicItem::setDescription(string description){
    description_=description;
}

void MagicItem::setMana(int mana){
    mana_required_=mana;
}

string MagicItem::getName()const{
    return name_;
}

int MagicItem::getValue()const{
    return value_;
}

string MagicItem::getDescription()const{
    return description_;
}

int MagicItem::getMana()const{
    return mana_required_;
}

string MagicItem::ToString(){
    stringstream mana, value;
    int manas=getMana(), values=getValue();
    string description=getDescription(), name=getName();
    mana<<manas;
    value<<values;
    string final = name+ ",$" + value.str() + ", " + description + ", requires " + mana.str() + " mana";
    return final;
}