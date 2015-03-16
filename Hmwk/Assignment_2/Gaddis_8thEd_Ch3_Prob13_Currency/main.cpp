/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *              Purpose: Assignment 2
 *              Currency
 * Created on March 16, 2015, 9:37 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
        float YEN_PER_DOLLAR=98.93f;
        float EURO_PER_DOLLAR=0.74f;
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    float usDlrs,cnvtYen,cnvtEu,fCnvrsn;
    char ye;
    //Begin Input
    cout<<"This Program Converts US Dollars Into either YEN or EYRO's."<<endl;
    cout<<"First, enter below the amount of US dollars you would like to be converted:"<<endl;
    cin>>usDlrs;
    cout<<"Next, choose the type of Currency you would like this amount converted to -One character input(y/e ?):"<<endl;
    cin>>ye;
    
    //Calculations
    cnvtYen=YEN_PER_DOLLAR*usDlrs;
    cnvtEu=EURO_PER_DOLLAR*usDlrs;
    fCnvrsn=((ye=='y')?(cnvtYen):(cnvtEu));
    //Begin Output
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"You entered $"<<usDlrs<<endl;
    cout<<"You requested this amount converted to "<<((ye=='y')?"Yen.":"Euro's.")<<endl;
    cout<<"The converted amount is: "<<fCnvrsn<<((ye=='y')?" Yen.":" Euro's.")<<endl;
    //Exit
    return 0;
}