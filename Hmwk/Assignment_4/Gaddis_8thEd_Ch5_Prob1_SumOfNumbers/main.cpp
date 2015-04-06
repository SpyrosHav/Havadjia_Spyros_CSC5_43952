/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 4
 *              Sum of Numbers
 * Created on April 6, 2015, 9:52 AM
 */

//System Lib
#include <iostream>
using namespace std;

//User Lib

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    int numI,sum;
    //Prompt for input
    cout<<"This Program calculates the sum of the numbers or a declared number,"<<endl;
    cout<<"starting from 1."<<endl;
    cout<<"Enter a positive integer value: "<<endl;
    cin>>numI;
    //Loop and calculate sum   
    do(sum=(numI+1)*numI/2);
    while(numI<=0);{
                   }
        while(numI<0){
        //Indicate Error
        cout<<"The value you entered is negative. The value must be a positive intiger value."<<endl;
        cout<<"Please restart the program and enter a positive intiger value"<<endl;
    }
     cout<<sum<<endl;
    return 0;
}

