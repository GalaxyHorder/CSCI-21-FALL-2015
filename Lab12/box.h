#ifndef LAB_H
#define LAB_H


#include <string>
#include <ostream>

using std::string;
using std::ostream;

template <class T>
class Box{
    
    private: 
    T contents;
    
    public:
    Box(){
        contents = 0;
    }
    
    Box(T newContents){
        contents = newContents;
    }
    
    T getContents(){//gets contents
        return contents;
    }
    
    void setContents(T newContents){//sets the contents to the new contents
        contents = newContents;
    }
    
    friend ostream& operator<<(ostream& out, const Box<T> &newContents){
        out << newContents.contents;
        return out;
    }
    
};

T Sum(T values[], unsigned int size){//takes everything in the array and adds them together
    T sum = T();
    for(int i = 0; i < size; i++){
        sum += values[i];
    }
    return sum;
}

#endif