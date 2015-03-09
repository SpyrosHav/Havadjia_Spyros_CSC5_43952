/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 * Created on March 2, 2015, 9:57 AM
 *      Purpose: Free fall Problem
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=3.2174e1f;//Acceleration in ft/sec^2
const float CNVFTMT=3.048e-1f;//Conversion from feet to meters

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
        //Calculate the distasce
            //dstnce=1/2*G*time*time DOESN'T WORK
        //dstnce=static_cast<float>(1)/2*G*time*time;
        //dstnce=1.0f/2*G*time*time;
        //dstnce=1/2.0f*G*time*time;
        //dstnce=0.5f*G*time*time;
        //dstnce=5e-1*G*time*time;
    dstnce=G*1/2*time*time;
    //Output the result
    cout<<"Distance Fallen="<<dstnce<<"(feet)"<<endl;
    cout<<"Distance Fallen="<<dstnce*CNVFTMT<<"(meters)"<<endl;
    //Exit
            return 0;
}

