/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *              Test Average
 * Created on March 18, 2015, 9:30 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    float test1,test2,test3,test4,test5,tAvg;
    //Prompt for inputs
    cout<<"This Program calculates the average grade according to your test scores."<<endl;
    cout<<"Please proceed with entering your five test scores, seperatin each with a space before the next."<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    //Calculate
    tAvg=(test1+test2+test3+test4+test5)/5;
    //Output
    cout<<fixed<<setprecision(1)<<showpoint<<endl;
    cout<<"Your accumulated Average according to your 5 test scores is:"<<endl;
    cout<<tAvg<<endl;
    //exit
    return 0;
}

