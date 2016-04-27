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
using namespace std;

class MagicItem{
  
  private:
  string description_, name_;
  int mana_required_, value_;
  
  public:
  MagicItem(string name = "magicitem", int value = 0, string description = "no description", int mana_required = 0);
  //MagicItem(string, int, string, int);
  ~MagicItem();
  void set_description(string);
  void set_name(string);
  void set_mana_required(int);
  void set_value(int);
  string name()const;
  int mana_required()const;
  int value()const;
  string description()const;
  string ToString();
  
};

#endif