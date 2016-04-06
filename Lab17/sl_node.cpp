
#include "sl_node.h"

SLNode::SLNode(){
    next_node_=NULL;
    contents_=0;
}

SLNode::SLNode(int contents){
    contents_=contents;
    next_node_=NULL;
}

SLNode::~SLNode(){
    
}

void SLNode::set_contents(int number){
    contents_=number;
}

int SLNode::contents()const{
    return contents_;
}

void SLNode::set_next_node(SLNode* it){
    next_node_=it;
}

SLNode* SLNode::next_node() const{
    return next_node_;
}