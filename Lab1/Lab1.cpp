/*
 * Name        : lab_1.cpp
 * Author      : Xavier Winsor
 * Date        : 02/08/2016
 * Description : Our First Lab of the Semester!
 */
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
 * Create a program based on the comments below
 * @param none
 * @return none
 */
/*
 * Create a string message based upon whether or not a user has
 * programming experience.
 * @param hasExperience a char ('y'es or 'n'o) representing whether
 *        or not a user has programming experience
 * @return "Welcome back" when hasExperience is 'y', else "Get ready to
 *         have some fun"
 */
string checkExperience (char hasExperience)
{
    //CODE HERE
    char answer=hasExperience;
    string response ="z";
    if (answer=='Y'){
        response="Good! We need people withssss some experience around here!";
    }else{
        response="That's too bad, well hopefully you'll learn a thing or two here!";
    }
    return string(response);
}

void FirstLab() {
    // (1) Declare a string variable named first_name
    string first_name="z";
    // (2) Declare a character variable named programmed_before and another named
    //     my_character. Initialize both of them to the value 'z'
    char programmed_before = 'z';
    // (3) Display a welcome message to standard output
    cout<<"Welcome my friend, please enter your first name"<<endl;
    // (4) Prompt the user for their first name
    cin>>first_name;
    // (5) Read the name from standard input and store in the variable first_name
    cout<<"Your name is "<<first_name<<"!"<<endl;
    // (6) Display the message "Nice to meet you, NAME" where NAME is replaced
    //     with the value of first_name
    cout<<"Nice to meet you, "<<first_name<<"!"<<endl;
    // (7) Ask the user if they have programmed before. Make sure you inform them
    //     that you want the answer as a single character (y/n)
    cout<<"Have you programed before? Answer Y for yes and N for no(caps are inportant!)"<<endl;
    // (8): Read in the answer from standard input and store in the variable
    //      programmed_before
    cin>>programmed_before;
    // (9): Call the function checkExperience appropriately so that the message will display
    string response=checkExperience(programmed_before);
    cout<<response<<endl;
}


int main(int argc, const char * argv[])
{
    FirstLab();
    return 0;
}