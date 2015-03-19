/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *      Celsius to Fahrenheit
 * Created on March 18, 2015, 10:54 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    unsigned short dC,dF;
    //Prompt for inputs
    cout<<"This program uses the input of temperature in Celsius and converts it into Fahrenheit."<<endl;
    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>dC;
    //calculate
    dF=(9/5.0)* dC+32;
    //Output Conversion dF
    cout<<"The temperature conversion is: "<<dF<<" Fahrenheit."<<endl;
    //exit  
    return 0;
}

