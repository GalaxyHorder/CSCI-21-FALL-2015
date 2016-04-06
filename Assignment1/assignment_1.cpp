/*
 * Name        : Assignment 1
 * Author      : Xavier Winsor
 * Description : review of csci 20
 * Sources     : FILL IN
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <streambuf>
#include "assignment_1.h"
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Write Function Definitions Here (What goes below main)
bool CheckAlphabetic(string alphabet){
    string master_alphabet_lower="abcdefghijklmnopqrstuvwxyz", master_alphabet_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//setting a master alphabet to check against
    bool alphabetical = false;
    if(alphabet!="\0"){
        bool alphabetical = true;
    }
    int i;
    for (i=0; i<=26 && alphabetical == true; i++){//will stop checking if it finds that something is out of place
        if (alphabet[i] == master_alphabet_upper[i] || alphabet[i] == master_alphabet_lower[i]){//checks both sets of alphabets inces the casing is different
            alphabetical=true;
        }/*else{
            alphabetical=false;
        }*/
    }
    return alphabetical;
}

int CountWords(string sentence){
    int count=0;
    if(sentence!="\0"){
        count++;
    }
    //checks every character in the sentence for the length of the sentence for a space then counts the integer count up every time it finds it.
    for(int i = 0; i<sentence.length();i++){
        if(sentence[i] == ' '){
            count++;
        }
    }
    return count;
}

bool EncryptString(string &sentence, int code){
    int coded_numbers[sentence.length()];
    bool true_false=true;
    string backup_sentence=sentence;//backup sentence incase true_false is false
    for (int i = 0; (i<sentence.length())&&(true_false==true); i++){
        coded_numbers[i] = sentence[i];
        if (((coded_numbers[i]<=90) && (coded_numbers[i]>=65)) || ((coded_numbers[i]<=122) && (coded_numbers[i]>=97))) {//checks if the corresponding numbers in the sentence is either an upper case letter, lower case letter, or a number
            
            coded_numbers[i]-=code;
            while(coded_numbers[i]<=32){
                coded_numbers[i]+=95;
            }
            sentence[i]=coded_numbers[i];
        }else{
            sentence=backup_sentence;
            true_false=false;
        }
    }
    return true_false;
}

bool DecryptString(string &sentence, int code){
    
    int coded_numbers[sentence.length()];
    string backup_sentence=sentence;//backup sentence incase true_false is false
    bool true_false=true;
    for (int i = 0; i<sentence.length()&&true_false==true; i++){
        
        coded_numbers[i] = sentence[i];
        
        coded_numbers[i]+=code;//adds the code to the sentence
        while(coded_numbers[i]>=126){//if the numbers in the code go over the ammount of letters there are, it cycles back to the beginging of the alphabet
            coded_numbers[i]-=95;
        }
        sentence[i]=coded_numbers[i];//reverts the integer back into the sentence
    }
    return true_false;
}

double ComputeAverage(double numbers[], int ammount){
    double total=0.0;//total starts at 0
    for (int i=0; i<ammount; i++) {//adds the number in the array to total
        total+=numbers[i];
    }
    total=total/ammount;//devides total by the ammount of numbers in the array
    return total;
}

double FindMinValue(double numbers[], int ammount){
    double smallest_number=100000000000000.0;//default largest number is really really big
    for (int i=0; i<ammount; i++) {
        if (numbers[i]<smallest_number) {//if the number within the array is smaller than the default it makes it the smallest number
            smallest_number=numbers[i];
        }
    }
    return smallest_number;
}

double FindMaxValue(double numbers[], int ammount){
    double smallest_number=0.0;//default smallest number is really really small
    for (int i=0; i<ammount; i++) {
        if (numbers[i]>smallest_number) {//if the number within the array is bigger than the biggest number than it changes it
            smallest_number=numbers[i];
        }
    }
    return smallest_number;
}
