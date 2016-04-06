
#include "sl_list.h"
#include "sl_node.h"


SLList::SLList(){
    head_=NULL;
    size_=0;
}

SLList::~SLList(){
    Clear();
}

void SLList::InsertHead(int number){
    
    SLNode *new_node = new SLNode(number);
    new_node -> set_next_node(head_);
    head_ = new_node;
    size_++;
    
}

void SLList::RemoveHead(){
    
    if(head_!=NULL){
        SLNode *temp = head_;
        head_ = head_ -> next_node();
        delete temp;
        temp = NULL;
        size_--;
    }
    
}

void SLList::Clear(){
    SLNode *temp;
    while(head_!=NULL){
        temp = head_;
        head_ = head_ -> next_node();
        delete temp;
        temp = NULL;
    }
    size_ = 0;
}

unsigned int SLList::size() const{
    return size_;
}

string SLList::ToString() const{
    SLNode *temp = head_;
   // string output;
    stringstream number;
    //int temp_number;
    while(temp!=NULL){
        number << temp->contents();
        if (temp -> next_node()!= NULL){
            number << ", ";
        }
        //number << temp_number;
        //output = output + ", " + number.str();
        temp = temp -> next_node();
    }
    delete temp; 
    temp = NULL;
    return number.str();
}