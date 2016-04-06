/*
 * Name        : lab_9.cpp
 * Author      : Xavier Winsor
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

// CODE HERE -- CLASS FUNCTION DEFINITIONS
void Spaceship::set_name(string name){
    name_=name;
}

void Spaceship::set_top_speed(double top_speed){
    top_speed_=top_speed;
}

void Spaceship::set_fuel_source(string fuel_source){
    fuel_source_=fuel_source;
}

void Spaceship::set_crew_capacity(int crew_capacity){
    crew_capacity_=crew_capacity;
}

string Spaceship::name()const{
    return name_;
}

double Spaceship::top_speed()const{
    return top_speed_;
}

string Spaceship::fuel_source()const{
    return fuel_source_;
}

int Spaceship::crew_capacity()const{
    return crew_capacity_;
}

string Spaceship::ToString()const{
    string names = name(), fuel_sources = fuel_source(), put_together;
    double top_speeds = top_speed();
    int crew_capacitys = crew_capacity();
    stringstream speed, capacity;
    speed.setf(ios::fixed|ios::showpoint);
    speed.precision(2);
    speed << top_speeds;
    capacity << crew_capacitys;
    put_together = names + "\nTop Speed:     Warp " + speed.str() + "\nFuel Source:   "+ fuel_sources + "\nCrew Capacity: " + capacity.str();
    string final=put_together;
    return final;
}