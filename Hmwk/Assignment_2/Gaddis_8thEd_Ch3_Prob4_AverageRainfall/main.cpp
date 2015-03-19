/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose:Assignment 2
 *      Average Rainfall
 * Created on March 18, 2015, 9:58 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    string nMnth1,nMnth2,nMnth3;
    float rMnth1,rMnth2,rMnth3,rAvg;
    //Prompt for inputs
    cout<<"This program will calculate average rainfall."<<endl;
    cout<<"Enter any month and the amount of rainfall in inches, separating the two with  space between them."<<endl;
    cin>>nMnth1>>rMnth1;
    cout<<"Now repeat with a second month followed by its own rainfall in inches separated by a space."<<endl;
    cin>>nMnth2>>rMnth2;
    cout<<"Now repeat with a third month followed by its own rainfall in inches separated by a space."<<endl;
    cin>>nMnth3>>rMnth3;
    //Calculate Avg
    rAvg=(rMnth1+rMnth2+rMnth3)/ 3;
            //Final Output
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
            cout<<"The average rainfall for "<<nMnth1<<", "<<nMnth2<<", and "<<nMnth3<<" is "<<rAvg<<" inches."<<endl;
    //exit
    return 0;
}

