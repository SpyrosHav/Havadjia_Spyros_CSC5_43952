/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *          Purpose:Assignment_1
 *                  Sum Of Two Numbers
 * Created on March 8, 2015, 7:39 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short num1,num2,total;
    num1=62;
    num2=99;
    total=num1+num2;
    //Output
    cout<<"This program Calculates the Sum of the following two numbers:"<<endl;
    cout<<num1<<", "<<num2<<"."<<endl;
    cout<<"The Sum of these two numbers is:"<<endl;
    cout<<total<<endl;
    return 0;
}

