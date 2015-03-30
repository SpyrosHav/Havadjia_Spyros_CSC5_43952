/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *     Purpose: Assignment 3
 *          Mass And Weight
 * Created on March 30, 2015, 2:58 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
    //Gravity
    float g=9.8;
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Variable declaration
    int weight,mass;
    //Prompt for input
    cout<<"What is the mass of the object you wish to calculate the weight of:"<<endl;
    cin>>mass;
    //calculate
    weight=mass*g;
    //Begin output
        if (weight>1000){
            cout<<"This object is too heavy."<<endl;
        }else if(weight<10){
            cout<<"This object is too light."<<endl;
        }else{
            cout<<"The object has a weight of "<<weight<<" Newtons"<<endl;
        }
    return 0;
}

