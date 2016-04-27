
#ifndef LABSS_H
#define LABSS_H
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
  Item(string name = "item", int value = 0);
  ~Item();
  void set_name(string);
  void set_value(int);
  string name();
  int value();
  string ToString();
    
};

#endif