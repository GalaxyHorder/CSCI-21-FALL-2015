
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

class Item{
  
  private:
  string name_;
  int value_;
  public:
  void setValues(string name = "item", int value = 0);
  ~Item();
  string getName();
  int getValue();
  string ToString();
    
};

#endif