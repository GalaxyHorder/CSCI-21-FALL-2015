#include "money.h"

// The Constructor, Accessors and Mutators have been defined for you
Money::Money(int dollars, int cents)
      : dollars_(dollars),
        cents_(cents) {
}

int Money::dollars() const {
    return dollars_;
}

int Money::cents() const {
    return cents_;
}

void Money::set_dollars(int dollars) {
  dollars_ = dollars;
}

void Money::set_cents(int cents) {
  cents_ = cents;
}

// This function definition provided as an example and is FULLY COMPLETE
const Money operator +(const Money& amount1, const Money& amount2) {
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Add all the cents together
  int sum_all_cents = all_cents1 + all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (sum_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

// REST OF CLASS FUNCTION DEFINITIONS GO HERE

const Money operator -(const Money& amount1, const Money& amount2){
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  int sum_all_cents = all_cents1 - all_cents2;
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  if (sum_all_cents < 0){
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

bool operator ==(const Money& amount1, const Money& amount2){
  bool equal;
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  if (all_cents1 == all_cents2){
    equal = true;
  }else{
    equal = false;
  }
  return equal;
}

const Money operator -(const Money &amount){
  int all_cents = amount.cents_ + amount.dollars_ * 100;
  int all_dollars = all_cents/100;
  int all_cent = all_cents%100;
  all_cent = -all_cent;
  all_dollars = -all_dollars;
  return Money(all_dollars, all_cent);
}

ostream& operator <<(ostream &out, const Money &amount){
  int dollars = amount.dollars_;
  int cents = amount.cents_;
  bool negative = false;
  if(cents < 0 && dollars == 0){
    cents = -cents;
    negative = true;
  }else if(cents < 0 && dollars < 0){
    cents = -cents;
    dollars = -dollars;
    negative = true;
  }
  stringstream dollar, cent;
  string final_amount;
  dollar << dollars;
  cent << cents;
  if ((cents < 10&&cents >= 0)&&negative == false&&dollars >= 0){
    final_amount = "$" + dollar.str() + ".0" + cent.str();
  }else if ((cents >= 10)&&negative == false&&dollars >= 0){
    final_amount = "$" + dollar.str() + "." + cent.str();
  }else if((cents < 10&&cents > 0)&&negative==true){
    final_amount = "$-" + dollar.str() + ".0" + cent.str();
  }else if (cents >= 10&&negative == true){
    final_amount = "$-" + dollar.str() + "." + cent.str();
  }else{
    final_amount = "it fails here";
  }
  out << final_amount;
  
}
