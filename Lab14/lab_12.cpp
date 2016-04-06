/*
 * Name        : lab_12.cpp
 * Author      : FILL IN
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_12.h"

int* MakeDynoIntArray(unsigned int size){
    
    int *array = new int[size];
    return array;
    
}

int Sum(int* the_array, unsigned int array_size){
    int* final;
    
    for(int i = 0; i<=array_size; i++){

        final = final + the_array[i];

    }
    int the_final = *final;
    return the_final;

}

int Max(int* the_array, unsigned int array_size){
    
    int max = 0;
    for(int i=0; i <= array_size; i++){
        if(the_array[i] > max){
            max = the_array[i];
        }
    }
    
    //int the_max = *max;
    return max;
}

int Min(int *the_array, unsigned int array_size){
    
    int min = 100000000;
    for(int i = 0; i<= array_size; i++){
        
        if(the_array[i]<min){
            min = the_array[i];
        }
    }
    //the_min = *min;
    return min;
    

}


// CODE HERE -- FUNCTION DEFINITIONS
