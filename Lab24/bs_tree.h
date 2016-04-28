

#ifndef LABS_H
#define LABS_H

#include "bst_node.h"
#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using namespace std;

class BSTree{
  
  private:
  bool Insert(int, BSTNode*&);
  void Clear(BSTNode*&);
  string InOrder(BSTNode*&);
  BSTNode* root_;
  unsigned int size_;
  
  public:
  BSTree();
  ~BSTree();
  bool Insert(int);
  void Clear();
  unsigned int size();
  string InOrder();
  
};

#endif