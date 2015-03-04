/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Homework Problem 16 - Create Diamond Figure
 * Created on March 4, 2015, 9:45 AM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Declare Variables
    char x;// 'x' will be used to display the diamond shape
//Prompt for the letter desired to be used for diamond construction
    cout<<"What letter would you like the diamond to be constructed with?";
    cin>>x;
//Begin output
    cout<<"        "<<x<<x<<endl;
    cout<<"      "<<x<<"    "<<x<<endl;
    cout<<"    "<<x<<"        "<<x<<endl;
    cout<<"  "<<x<<"            "<<x<<endl;
    cout<<x<<"                "<<x<<endl;
    cout<<x<<"                "<<x<<endl;
    cout<<"  "<<x<<"            "<<x<<endl;
    cout<<"    "<<x<<"        "<<x<<endl;
    cout<<"      "<<x<<"    "<<x<<endl;
    cout<<"        "<<x<<x<<endl;

    //End
    return 0;
}

