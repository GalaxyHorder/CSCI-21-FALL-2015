#ifndef LAB_H
#define LAB_H  

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using namespace std;

class BSTNode{
  
  private:
  BSTNode* left_child_;
  BSTNode* right_child_;
  int contents_;
  
  public:
  BSTNode();
  BSTNode(int contents);
  ~BSTNode();
  void set_contents(int);
  int contents() const;
  int& contents();
  void set_left_child(BSTNode*);
  void set_right_child(BSTNode*);
  BSTNode* left_child() const;
  BSTNode*& left_child();
  BSTNode* right_child() const;
  BSTNode*& right_child();
    
};

#endif