/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: 2nd Homework Problem
 * Created on March 4, 2015, 8:29 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
unsigned char CNVPCT=100;

//Function Prorotypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //Input/Assigned Values
    nCust=16500;//Number of Customers
    pEDrnks=15;//Percentage of Energy Drinks
    pCDrnks=58;//Percentage out of Energy Drinkers Preffering Citrus
    //Pocess/Caclulate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks+0.5;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks+0.5;
    //Output Everything
    cout<<"Customer Survey Problem"<<endl;
    cout<<"Known/Unknown Values:"<<endl;
    cout<<"Number of Customers="<<nCust<<endl;
    cout<<"Percentage Energy Drinkers = "
                <<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/Energy Drinkers = "
              <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculate Values:"<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    
        return 0;
}

