/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 5
 *              Markup
 * Created on April 22, 2015, 8:15 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float, float);
//Execution
int main(int argc, char** argv) {
    //Define Variables
    float wSale;//Wholesale
    float mrkUp;//Markup Percentage
    //Design Layout
    cout<<fixed<<setprecision(2)<<showpoint;
    //Prompt for inputs
    cout<<"This program calculates the end retail price of an item input by the user"<<endl;
    cout<<"Enter the wholesale price of an item in dollars:"<<endl;
    cin>>wSale;
    cout<<"Enter the markup percentage as a positive integer:"<<endl;
    cin>>mrkUp;
    cout<<endl;
    cout<<"This items retail price is $"<<calculateRetail(wSale, mrkUp)<<endl;
    return 0;
}

//**********Calculated Retail************
float calculateRetail(float w, float m){
    return ((w*m)/100)+w;
}