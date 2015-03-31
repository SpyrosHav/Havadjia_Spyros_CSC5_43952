/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *     Purpose: Assignment 3
 *          Minimum & Maximum
 * Created on March 30, 2015, 2:58 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Variable declaration
    int num1,num2;
    //Prompt for input
    cout<<"Enter a number:"<<endl;
    cin>>num1;
    cout<<"Enter a diffrent number:"<<endl;
    cin>>num2;
    //Evaluation
    num1>num2?
        cout<<"The maximum is "<<num1<<" and the minimum is "<<num2:
            cout<<"The maximum is "<<num2<<" and the minimum is "<<num1<<endl;
    //exit
    return 0;
}

