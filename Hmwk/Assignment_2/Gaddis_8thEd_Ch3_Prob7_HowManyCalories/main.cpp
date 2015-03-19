/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *      How Many Calories
 * Created on March 18, 2015, 9:30 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Properties

//Execution
int main(int argc, char** argv) {
    //Define Variables
    short tCkies=40,tSrvngs=10,nc1Srv,cpSrvng=300,cpCkie,cCkies,clrCnsm;
    //Prompt for input
    cout<<"How many calories have you consumed?"<<endl;
    cout<<"Well, how many cookies have you consumed?"<<endl;
    cin>>cCkies;
    //Calculations
    nc1Srv=tCkies/tSrvngs;
    cpCkie=cpSrvng/nc1Srv;
    clrCnsm=cpCkie*cCkies;
    //Output
    cout<<"The estimated calories you have consumed according to "<<endl<<"the number of cookies you have had is: "<<clrCnsm<<" calories."<<endl;
    //exit
    return 0;
}

