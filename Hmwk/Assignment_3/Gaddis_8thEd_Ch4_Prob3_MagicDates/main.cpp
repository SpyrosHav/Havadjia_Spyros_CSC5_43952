/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose:Assignment 3
 *              Magic Dates
 * Created on March 30, 2015, 9:53 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Declare Variables
    int month,day,year;
    cout<<"This Program takes a date entered and evaluates if it's a magic date"<<endl<<"or not."<<endl;
    //Prompt for inputs
    cout<<"So first enter(in numeric form) a month, a day, and a (2-digit) year,"<<endl<<"seperating all three through spaces in between."<<endl;
    cin>>month>>day>>year;
    //output
    if (year==month*day){
        cout<<"Congratulations, this is a magic date!"<<endl;
    }else{
        cout<<"Too bad, this is not a Magic Date"<<endl;
    }
    //end
    return 0;
}

