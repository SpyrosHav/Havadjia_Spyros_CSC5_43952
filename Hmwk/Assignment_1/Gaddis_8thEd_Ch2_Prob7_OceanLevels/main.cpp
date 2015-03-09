/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment_1
 *          Ocean Levels
 * Created on March 9, 2015, 1:20 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float olRise=1.5; //Milimeters
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    short fYrs,sYrs,tYrs;
    fYrs=5;
    sYrs=7;
    tYrs=10;
    short fYri,sYri,tYri;
    //Calculations
    fYri=olRise*fYrs;
    sYri=olRise*sYrs;
    tYri=olRise*tYrs;
    //Output
    cout<<"This program calculates the rise of seal levels in milimeters over several time periods:"<<endl;
    cout<<"In five years the ocean levels will rise by: "<<fYri<<" milimeters."<<endl;
    cout<<"In seven years the ocean levels will rise by: "<<sYri<<" milimeters."<<endl;
    cout<<"In ten years the ocean levels wil rise by: "<<tYri<<" milimeters."<<endl;
    //Exit
    return 0;
}

