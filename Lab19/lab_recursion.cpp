/*
 * Name        : lab_recursion.cpp
 * Author      : Xavier Winsor
 * Description : Recursive Functions
 */

#include "lab_recursion.h"

// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */
stringstream decToBin(int num)
{
    stringstream number, final;
    int temp;
    if (num > 1) //note this makes the base case num = 0
    {
        number = decToBin(num/2); //recursive call
    }
    temp = (num%2);
    number << temp;
    final << number.str();
    return final; //outputs in correct order
}

unsigned int binToDec(string num){
    int length = num.length(), number=0, temp = 1;
    stringstream numbers;
    numbers << num;
    for (int z = length; z>=0;z--){
        if (num[z]=='1'){
            temp = 1;
            for (int i = 0; i<((length-z)-1); i++){
                temp = temp * 2;
            }
            number += temp;
        }
    }
    
    return number;
}

int main(int argc, char **argv){
    
    return 0;
}