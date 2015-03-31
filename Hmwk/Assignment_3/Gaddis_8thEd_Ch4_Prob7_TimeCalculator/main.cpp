/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 3
 *              Time Calculator
 * Created on March 23, 2015, 10:42 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Define Variables
    int sec;
    cout<<"Please input a number of seconds:"<<endl;
    cin>>sec;
    if (sec>=86400){
        float day;
        day=sec/3600.0;
        cout<<"You entered "<<day<<" day(s)."<<endl;
    }else if(sec>=3600){
        float hr;
        hr=sec/3600.0;
        cout<<"You entered "<<hr<<" hour(s)."<<endl;  
    }else if(sec>=60){
        float min;
        min=sec/60.0;
        cout<<"You entered "<<min<<" minute(s)."<<endl;
    }else if(sec<60){
        cout<<"You entered "<<sec<<" seconds."<<endl;
    }
    //exit
    return 0;
}

