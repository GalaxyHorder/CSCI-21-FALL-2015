#include "temperature.h"
using namespace std;

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature(){
    kelvin_=0.0000000;
}

Temperature::Temperature(double kelvin){
    kelvin_=kelvin;
}

Temperature::Temperature(double temp, char unit){
    if (unit == 'C'|| unit == 'c'){
        SetTempFromCelsius(temp);
    }else if(unit == 'F' || unit == 'f'){
        SetTempFromFahrenheit(temp);
    }else{
        kelvin_=temp;
    }
}

void Temperature::SetTempFromKelvin(double kelvin){
    kelvin_=kelvin;
}

void Temperature::SetTempFromCelsius(double celsius){
    kelvin_=celsius+273.15;
}

void Temperature::SetTempFromFahrenheit(double fehrenheit){
    kelvin_=(5.0 * (fehrenheit - 32) / 9) + 273.15;
}

double Temperature::GetTempAsKelvin()const{
    return kelvin_;
}

double Temperature::GetTempAsCelsius()const{
    double celsius = kelvin_ - 273.15;
    return celsius;
}

double Temperature::GetTempAsFahrenheit()const{
    return (((kelvin_ - 273.15)*9.0)/5)+32;
}

string Temperature::ToString(char unit) const{
    string units = "a";
    string output = "a";
    stringstream oss;
    oss.setf(ios::fixed|ios::showpoint);
    oss.precision(2);
    double number;
    if (unit == 'C'||unit == 'c'){
        units = "Celsius";
        number = GetTempAsCelsius();
        oss<<number;
        output = oss.str() + " " + units;
    }else if(unit == 'F'||unit == 'f'){
        units = "Fahrenheit";
        number = GetTempAsFahrenheit();
        oss<<number;
        output = oss.str() + " " + units;
    }else if(unit == 'K'||unit == 'k'){
        units = "Kelvin";
        number = GetTempAsKelvin();
        oss<<number;
        output = oss.str() + " " + units;
    }else{
        output = "Invalid Unit";
    }
    return output;
}