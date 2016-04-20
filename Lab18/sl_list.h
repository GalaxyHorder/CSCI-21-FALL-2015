
#ifndef THELAB_H
#define THELAB_H

#include "sl_node.h"
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using namespace std;


class SLList{
  
  private:
  SLNode *head_, ;
  unsigned int size_;
  
  public: 
  SLList();
  ~SLList();
  void InsertHead(int);
  void RemoveHead();
  void Clear();
  unsigned int size() const;
  string ToString() const;
    
};

#endif