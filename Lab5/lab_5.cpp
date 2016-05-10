/*
 * Name        : lab_5.cpp
 * Author      : Xavier Winsor
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)
void Hello(){
    cout<<"Hello world!";
}

void PrintMessage(string out){
    cout<<out;
}

int GetAnswer(){
    return 42;
}

int FindLarger(int first_value, int second_value){
    if(first_value>second_value){
        return first_value;
    }else if(first_value<second_value){
        return second_value;
    }else{
        return first_value;
    }
}

string BuildMessage(string message, bool upper){
    if (message == ""){
        return "Message: empty";
    }
    if(upper == true){
        for(int i = 0; i<message.size(); i++){
            char letter = message[i];
            letter = toupper(letter);
            message[i] = letter;
        }
        return "Message: " + message;
    }else{
        return "Message: " + message;
    }
}