/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *              Purpose: To see how many chocolate bars it takes to maintain weight.
 * Created on March 9, 2015, 10:21 AM
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
    unsigned short wlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Prompt User For Input
    cout<<"How many candy bars does it take to maintain your weight?"<<endl;
    cout<<"All inputs are Intigers!"<<endl;
    cout<<"Input your weight in lbs."<<endl;
    cin>>wlbs;
    cout<<"Input yout height in inches."<<endl;
    cin>>htin;
    cout<<"Input your age in years."<<endl;
    cin>>ageyrs;
    cout<<"Are you Male or Female (m/f)? -One Character Input."<<endl;
    cin>>mf;
            
    //Calculations
    BMRFem=655+4.3*wlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wlbs+12.9*htin-6.8*ageyrs;
    //        Ques        if Male      If Female
    nCBars=((mf=='m')?(BMRMale/cBar):(BMRFem/cBar));
    //Output the Results
    cout<<"Your weight = "<<wlbs<<" (lbs)."<<endl;
    cout<<"Your height = "<<htin<<" (inches)."<<endl;
    cout<<"Your age = "<<ageyrs<<" (years)."<<endl;
    cout<<"Your sex = "<<((mf=='m')?"Male.":"Female.")<<endl;
    cout<<"You can eat "<<nCBars<<" candy bars per day."<<endl;
    //Exit
    return 0;
}

