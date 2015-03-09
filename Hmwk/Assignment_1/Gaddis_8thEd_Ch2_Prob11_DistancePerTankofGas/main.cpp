/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment_1
 *          Distance Per Tank of Gas
 * Created on March 9, 2015, 1:56 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    short tGlns;
    float mpgHwy,mpgCty;
    tGlns=20;
    mpgHwy=26.8;
    mpgCty=21.5;
    //Unknowns
    float ctyD,hwyD;
    //Calculations
    ctyD=tGlns*mpgCty;
    hwyD=tGlns*mpgHwy;
    cout<<"This Program calculates the distance capability of a vehicle with the following specifications: "<<endl;
    cout<<"Fuel Tank Capacity: "<<tGlns<<" Gallons."<<endl;
    cout<<"City Miles Per Gallon: "<<mpgCty<<"."<<endl;
    cout<<"Highway Miles Per Gallon: "<<mpgHwy<<"."<<endl;
    cout<<"Following is the calculated distance the vehicle is capable of when driven in the city: "<<endl;
    cout<<ctyD<<" miles."<<endl;
    cout<<"Following is the calculated distance the vehicle is capable of when driven on the highway: "<<endl;
    cout<<hwyD<<" miles."<<endl;
    
    //Exit
    
    return 0;
}

