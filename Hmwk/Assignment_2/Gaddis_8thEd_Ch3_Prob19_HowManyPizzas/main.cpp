/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *          How Many Pizzas
 * Created on March 17, 2015, 11:00 PM
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
    float dPizza,rPizza,aPizza,nSlices,tPizzas;
    float aSlice=14.125; //Area of single slice in inches.
    char onePrsn=4,tPrsns;
    //Begin output
    cout<<"This program will calculate the number of pizzas of a given size needed for a party."<<endl;
    cout<<"First, enter the diameter of the pizza you would like, in inches."<<endl;
    cin>>dPizza;  //Prompt for input of pizza size
    cout<<"Next, enter how many people will be attending this party."<<endl;
    cin>>tPrsns;  //Prompt for input of total attendees
    //Calculations
    rPizza=dPizza/2.0;
    aPizza=Pi * pow(rPizza, 2.0);
    nSlices=aPizza/aSlice;
    tPizzas=(onePrsn/nSlices)*tPrsns;
    //Output
    cout<<fixed<<setprecision(1)<<showpoint<<endl; //Formatting of output
    cout<<"The number of pizzas of this diameter that will be needed is: "<<tPizzas<<" pizzas."<<endl;
    cout<<nSlices;
    return 0;
}

