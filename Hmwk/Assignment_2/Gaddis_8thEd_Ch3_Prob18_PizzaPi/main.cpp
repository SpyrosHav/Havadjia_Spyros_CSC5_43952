/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *          Pizza Pi
 * Created on March 17, 2015, 10:37 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
float Pi=3.14159f;
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    float dPizza,rPizza,aPizza,nSlices;
    float aSlice=14.125f; //Area of single slice in inches.
    //Begin output
    cout<<"This program will calculate the number of slices a pizza of any size can be divided into for Joe s Pizza Palace."<<endl;
    cout<<"First, enter the diameter of the pizza, in inches."<<endl;
    cin>>dPizza;  //Prompt for pizza size
    //Calculations
    rPizza=dPizza/2.0;
    aPizza=Pi * pow(rPizza, 2.0);
    nSlices=aPizza/aSlice;
    //Output
    cout<<fixed<<setprecision(1)<<showpoint<<endl; //Formatting of output
    cout<<"A pizza of this diameter can be cut into "<<nSlices<<" slices."<<endl;
    return 0;
}

