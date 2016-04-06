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
  void Constructor(string name = "magicitem", int value = 0, string description = "no description", int mana_required = 0);
  ~MagicItem();
  void setDescription(string description);
  void setName(string name);
  void setMana(int mana);
  void setValue(int value);
  string getName()const;
  int getMana()const;
  int getValue()const;
  string getDescription()const;
  string ToString();
  
};

#endif