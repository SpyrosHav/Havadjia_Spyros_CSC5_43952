/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *              Miles Per Gallon
 * Created on March 18, 2015, 8:37 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Properties

//Execution
int main(int argc, char** argv) {
    //Define Variables
    unsigned short mpgTtl,fTank,tMiles;
    //Begin prompt for inputs
    cout<<"This program calculates the miles per gallon of your vehicle."<<endl;
    cout<<"First, we would lik you to enter the capacity of a full tank of gas of your car in imperial gallons."<<endl;
    cin>>fTank;
    cout<<"Now tell us how many miles you can travel on that one full tank, in miles."<<endl;
    cin>>tMiles;
    //Calculations
    mpgTtl=tMiles/fTank;
    //Begin Output
    cout<<"According to the information provided, yout car has an estimated mpg of: "<<mpgTtl<<" miles per gallon."<<endl;
    //exit
    return 0;
}

