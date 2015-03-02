/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 * Created on February 23, 2015, 9:56 AM
 *      Purpose: Input/Process/Output and Flowchart
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under std namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    //Inputs:
    //  Pay Rate = payRate-> $'s/hr,
    //  Hours Worked = hrsWrkd-> hrs
    //Output:
    //  Gross Pay Check Amount = payChk -> $'s
    float payRate, hrsWrkd, payChk;
    //Prompt the user for inputs
    cout<<"This Program Calculates Your Gross Paycheck."<<endl;
    cout<<"Input Your Pay Rate as $xx.xx, Provide the x's."<<endl;
    cin>>payRate;
    cout<<"Input Your Hours Worked This Pay Period."<<endl;
    cout<<"Format xxx.x, Provide the x's"<<endl;
    cin>>hrsWrkd;
    //Calculate the Paycheck
    payChk=payRate*hrsWrkd;
    //Output Results
    cout<<"$"<<payChk<<" = $"<<payRate<<"/hr * "<<hrsWrkd<<"(hrs)"<<endl;
    //Exit Stage Right.
    
    return 0;
}

