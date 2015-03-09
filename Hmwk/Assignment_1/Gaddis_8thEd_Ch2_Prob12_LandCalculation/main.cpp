/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment_1
 *          Land Calculation
 * Created on March 9, 2015, 2:28 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float acr1=43560; //Square feet
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    float lnd1,tAcrs;
    lnd1=389767;
    tAcrs=lnd1/acr1;
    //Output
    cout<<"This Program Calculates how many acres there are in "<<lnd1<<" square feet of land."<<endl;
    cout<<"There are "<<tAcrs<<" acres in "<<lnd1<<" square feet of land."<<endl;
    //Exit
    return 0;
}

