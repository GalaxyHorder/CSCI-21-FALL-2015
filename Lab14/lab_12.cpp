/*
 * Name        : lab_12.cpp
 * Author      : Xavier Winsor
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_12.h"

int* MakeDynoIntArray(unsigned int size){
    
    int *array = new int[size];
    return array;
    
}

int Sum(int* the_array, unsigned int array_size){
    if(the_array != NULL){
        int final=0;
        for(int i = 0; i < array_size; i++){
            int number = the_array[i];
            final = final + number;
    
        }
       return final;
    }else{
        throw "NULL ARRAY REFERENCE";
    }
}

int Max(int* the_array, unsigned int array_size){
    if(the_array!=NULL){
        int max = 0;
        for(int i=0; i < array_size; i++){
            if(the_array[i] > max){
                max = the_array[i];
            }
        }
        return max;
    }else{
        throw "NULL ARRAY REFERENCE";
    }
}

int Min(int *the_array, unsigned int array_size){
    if(the_array != NULL){
        int min = 100000000;
        for(int i = 0; i< array_size; i++){
            
            if(the_array[i]<min){
                min = the_array[i];
            }
        }
        //the_min = *min;
        return min;
    }else{
        throw "NULL ARRAY REFERENCE";
    }
}


// CODE HERE -- FUNCTION DEFINITIONS
