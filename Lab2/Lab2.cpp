/*
 * Name        : lab_2.cpp
 * Author      : Xavier Winsor
 * Description : Using Arithmetic to finish the functions MakeChange() and
 *               LaunchHumanCannonball()
 * Sources     :
 */

// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used
#include "Lab2.h"


/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters,
 * dimes, nickels, and pennies that would be given as change.
 * @param int initial_value - The amount of change to be broken down in pennies.
 * @param int quarters  - The number of quarters that come out of initial_value
 * @param int dimes - The number of dimes that come out of initial_value,
 *                    after quarters have been taken out
 * @param int nickels - The number of nickels that come out of initial_value,
 *                      after quarters and dimes have been taken out
 * @param int pennies - The number of pennies that come out of initial_value,
 *                      after quarters, dimes, and nickels have been taken out
 */
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels, int &pennies) {
  // CODE HERE
  quarters=(initial_value*4);
  dimes=(initial_value*10);
  nickels=(initial_value*20);
  pennies=(initial_value*100);
  
}

/*
 * Computes the horizontal distance traveled by a human cannonball given an
 * initial velocity and launch angle. Simplified -- does not account for many
 * factors that affect projectile motion.
 * @param double initial_velocity - Represents the initial velocity of the
 *                                  human cannonball in meters/second
 * @param double launch_angle -  Represents the launch angle of the human
 *                               cannonball in degrees
 * @return double  - Represents the horizontal distance the human cannonball
 *                   will travel
 */
double LaunchHumanCannonball(double initial_velocity, double launch_angle) {
  // (1) Convert launch_angle from degrees to radians
  //     [radian_angle = launch_angle * (kPI/180)]
  // CODE HERE
    double radian_angle = launch_angle * (kPI/180);
  // (2) Compute final horizontal/x velocity
  //     [x_velocity = initial_velocity * cos(radian_angle)]
  // CODE HERE
    double x_velocity = initial_velocity * cos(radian_angle);
  // (3) Compute final vertical/y velocity
  //     [y_velocity = initial_velocity * sin(radian_angle) * -1]
  // CODE HERE
    double y_velocity = initial_velocity * sin(radian_angle) * -1; 
  // (4) Compute time of flight
  //     [flight_time = (y_velocity) * 2 / -9.8]
  // CODE HERE
    double flight_time = y_velocity * 2 / -9.8;
  // (5) Compute horizontal/x distance traveled
  //     [x_distance = x_velocity * flight_time]
  // CODE HERE
    double x_distance = x_velocity * flight_time;
  // (6) Return horizontal/x distance
  // CODE HERE
  return x_distance;
}

int main(int argc, const char * argv[]) {
    int money, quarters=0, nickels=0, pennies=0, dimes=0;
    double initial_velocity=0, launch_angle=0;
    cout<<"How many dollars do you want me to make into change?"<<endl;
    cin>>money;
    MakeChange(money, quarters, dimes, nickels, pennies);
    cout<<"You have:\n"<<quarters<<" Quarters\nor "<<dimes<<" Dimes\nor "<<nickels<<" nickels\nor "<<pennies<<" pennies"<<endl;
    cout<<"Input the initial velocity to the catapult."<<endl;
    cin>>initial_velocity;
    cout<<"Input the launch angle."<<endl;
    cin>>launch_angle;
    double out = LaunchHumanCannonball(initial_velocity, launch_angle);
    cout<<"The result is " <<out<<endl;
    
    return 0;
}