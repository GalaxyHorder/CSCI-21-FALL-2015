
#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::endl;
using std::string;

class SLNode{
  
  private:
  SLNode* next_node_;
  int contents_;
  public:
  SLNode();
  SLNode(int contents);
  ~SLNode();
  void set_contents(int);
  int contents() const;
  void set_next_node(SLNode*);
  SLNode* next_node() const;
    
};

#endif