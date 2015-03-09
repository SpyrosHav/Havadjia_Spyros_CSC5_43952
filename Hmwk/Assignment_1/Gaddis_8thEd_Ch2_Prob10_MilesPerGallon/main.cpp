/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *          Purpose: Assignment_1
 *                  Miles Per Gallon
 * Created on March 9, 2015, 12:20 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short glns,mls,mpg;
    glns=12;
    mls=350;
    //Calculations
    mpg=mls/glns;
    //Output
    cout<<"This program calculates the Miles Per Gallon of a vehicle"<<endl;
    cout<<"Fuel Tank Capacity: "<<glns<<" Gallons."<<endl;
    cout<<"Distance per refill of Fuel Tank: "<<mls<<" Miles"<<endl;
    cout<<"The rate of Miles Per Gallon of such a vehicle is: "<<mpg<<" Miles for every Gallon."<<endl;
    
    
    return 0;
}

