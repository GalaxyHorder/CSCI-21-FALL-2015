
#include "bs_tree.h"

bool BSTree::Insert(int new_content, BSTNode*& root){
    if(root == NULL){
        root = new BSTNode(new_content);//makes 
        size_++;
        return true;
    }else{
        if(root -> contents()==new_content){
            return false;//checks if the number is already in the tree and returns false
        }else{
            if(root->contents() > new_content) {//compares the content within the node to the new content, if it's bigger, move on to the left child if smaller move on to the right child.
                return Insert(new_content, root->left_child());
            }else{
                return Insert(new_content, root->right_child());
            }
        }
    }
}

void BSTree::Clear(BSTNode*& root){
    if(root != NULL){//if root is not null execute, else do nothing
        if(root -> left_child()!=NULL){//goes all the way down through the left child
            Clear(root->left_child());
        }
        if(root->right_child()!=NULL){//goes all the way down through the right child
            Clear(root->right_child());
        }
        root = NULL;//deletes the node it's on before ending the function and moving it's way back up the recursion chain
        delete root;
        size_--;
    }
}

string BSTree::InOrder(BSTNode*& root){
     stringstream out;
     if(root != NULL){//if not null, just return nothing, else return what's in the function
        if(root->left_child()!=NULL){//goes all the way down the recursion chain through the left child
            out<<InOrder(root->left_child());
        }
        out<<root->contents()<<" ";//puts the contents of the node into the out string stream with a space afterwards
        if(root -> right_child()!=NULL){//goes down the right child if it's not null
            out<<InOrder(root->right_child());
        }
        return out.str();//returns out as a string
     }else{
         return "";
     }
    
}

BSTree::BSTree(){//default constructor
    root_= NULL;
    size_=0;
}

BSTree::~BSTree(){//deconstructor for bstree that calls clear
    Clear();
}

bool BSTree::Insert(int content){//calls private insert function
    return Insert(content, root_);
}

void BSTree::Clear(){//calls private clear function
    Clear(root_);
}

unsigned int BSTree::size(){//returns private size
    return size_;
}

string BSTree::InOrder(){//calls private inorder function
    return InOrder(root_);
}