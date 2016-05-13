/*
 * Name        : sorting.cpp
 * Author      : Xavier Winsor
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS

void SwapValues(int &value_1, int &value_2) {
  // DO NOT ALTER THE NEXT 3 LINES!!!
  if (GRADER) {
    cout << value_1 << " " << value_2 << endl;
  }
  // Code SWAP Algorithm Here
  int temp = value_1;
  value_1 = value_2;
  value_2 = temp;

}

int BubbleSort(int the_array[], unsigned int size){
  int swapped = 0;
  
  for(int i = 1; i<size; i++){
    if(the_array[i]<the_array[i-1]){
      SwapValues(the_array[i-1], the_array[i]);
    }
    swapped++;
  }
  bool check = false;
  for(int i = 1; i<size; i++){
    if(the_array[i]<the_array[i-1]){
      check = true;
    }
  }
  if(check==true){
    int temp = OptimizedBubbleSort(the_array, size);
  }
  
  
  return swapped;
}

int OptimizedBubbleSort(int the_array[], unsigned int size){
  int swapped = 0;
  for(int i = 1; i<size; i++){
    if(the_array[i]<the_array[i-1]){
      SwapValues(the_array[i-1], the_array[i]);
      swapped++;
    }
  }
  if(swapped<1){
    swapped++;
  }
  bool check = false;
  for(int i = 1; i<size; i++){
    if(the_array[i]<the_array[i-1]){
      check = true;
    }
  }
  if(check==true){
    int temp = OptimizedBubbleSort(the_array, size);
  }
  return swapped;
}


int SelectionSort(int the_array[], unsigned int size){
  int marker, swapped = 0;
  for(int i = 0; i < size; i++){
    bool swap=false;
    int smallest = the_array[i];
    for(int z = i; z<size; z++){
      if(the_array[z] < smallest){
        smallest = the_array[z];
        marker = z;
        swap = true;
      }
    }
    if(swap == true){
      // int temp = the_array[i];
      // the_array[i] = smallest;
      // the_array[marker] = temp;
      SwapValues(the_array[i], the_array[marker]);
    }
    swapped++;
  }
  return swapped;
  
}

int InsertionSort(int the_array[], unsigned int size){
  int swapped=0;
  for(int i = 0; i<size; i++){
    int z = i;
    for(z = i; z>=1; z--){
      if(the_array[z]<the_array[z-1]){
        SwapValues(the_array[z], the_array[z-1]);
      }
    }
    swapped++;
  }
  
  return swapped;
}

int ShellSort(int the_array[], unsigned int size){
  int swapped = 0;
  for(int marker = size/2; marker >= 1; marker = marker/2){
    for(int i = 0; (marker + i) < size; i++){
      if(the_array[i]>the_array[i+marker]){
        int temp = the_array[i];
        the_array[i] = the_array[i+marker];
        the_array[i+marker] = temp;
        // DisplayArray(the_array);
        // SwapValues(the_array[i+marker], the_array[i]);
        // swapped++;
       DisplayArray(the_array);
      }
    }
    DisplayArray(the_array);
    swapped++;
  }
  for(int i = 0; i<size; i++){
    int z = i;
    for(z = i; z>=1; z--){
      if(the_array[z]<the_array[z-1]){
        int temp = the_array[z];
        the_array[z] = the_array[z-1];
        the_array[z-1] = temp;
        DisplayArray(the_array);
      }
    }
    
  }
  DisplayArray(the_array);
  return swapped;
}