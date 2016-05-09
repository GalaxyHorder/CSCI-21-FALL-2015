/*
 * Name        : lab_3.cpp
 * Author      : Xavier Winsor
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
  
  if(item == "porridge"){
      if(number == 1){
          return "This porridge is too hot";
      }else if(number == 2){
          return "This porridge is too cold";
      }else{
          return "This porridge is just right";
      }
  }else if(item == "chair"){
    if(number == 1){
          return "This chair is too big";
    }else if(number == 2){
        return "This chair is too small";
    }else{
        return "This chair is just right";
    }
  }else{
    if(number == 1){
        return"This bed is too hard";
    }else if(number == 2){
        return "This bed is too soft";
    }else{
        return "This bed is just right";
    }
  }
  // CODE HERE
}

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
  // YOU MUST USE A SWITCH IN THIS FUNCTION
  int out;
    switch (player_one){
        case 'r':
        switch(player_two){
            case 'r':
            out = 3;
            break;
            case 'p':
            out = 1;
            break;
            case 's':
            out = 2;
            break;
        }
        break;
        case 'p':
        switch(player_two){
            case 'r':
            out = 1;
            break;
            case 'p':
            out = 3;
            break;
            case 's':
            out = 2;
            break;
        }
        break;
        case 's':
        switch(player_two){
            case 'r':
            out = 2;
            break;
            case 'p':
            out = 1;
            break;
            case 's':
            out = 3;
            break;
        }
        break;
        default:
        out = 0;
        break;
    }
    return out;
  // CODE HERE
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
    string out;
    for(int i=0; input[i] != input.size(); i++){
        out[i] = tolower(input[i]);
    }
    return out;
  // CODE HERE
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
    string out;
    for(int i=0; input[i] != input.size(); i++){
        out[i] = toupper(input[i]);
    }
    return out;
  // CODE HERE
}

int main(int argc, const char * argv[]) {
    int number, end;
    string input, input2;
    char rock1, rock2;
    while (end != 2){
        cout<<"What object for goldilocks?"<<endl;
        cin>>input;
        cout<<"What number?"<<endl;
        cin>>number;
        string fixed = ToLower(input);
        string goldilocks = Goldilocks(fixed, number);
        cout<<goldilocks<<"\n" << "go again? 1. yes 2. no" << endl;
        cin>>end;
    }
    end = 0;
    while (end != 2){
        cout<<"now lets play rock paper scissor! input R for rock, P for paper, or S for scissor"<<endl;
        cin>>rock1;
        cout<<"now input for player 2"<<endl;
        cin>>rock2;
        int output = RockScissorPaper(rock1, rock2);
        cout<<output<<endl;
        cout<<"play again? 1. yes, 2. no"<<endl;
        cin>>end;
        
    }
    return 0;
}