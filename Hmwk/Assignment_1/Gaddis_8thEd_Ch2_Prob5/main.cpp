/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment_1 Homework
 *                  Find the Average
 * Created on March 7, 2015, 4:19 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functions Prototypes

//Execution
int main(int argc, char** argv) {
        //State the Variables
    int num1,num2,num3,num4,num5;
    int Sum,nAvg;
        //Input/Values of known Variables
    num1=28;
    num2=32;
    num3=37;
    num4=24;
    num5=33;
        //Formula's to variables
    Sum=num1+num2+num3+num4+num5;
    nAvg=Sum/5;
        //Begin Output
    cout<<"This Program calculates the Average of the following numbers:"<<endl;
    cout<< num1<<", "<< num2<<", "<< num3<<", "<< num4<<", "<< num5<<"."<<endl;
    cout<<"The Sum f these numbers is: "<<Sum<<endl;
    cout<<"The Average of these numbers is: "<<nAvg<<endl;
    
        //Exit Program
    return 0;
}

