/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 4
 *              Sum of Numbers
 * Created on April 6, 2015, 9:52 AM
 */

//System Lib
#include <iostream>
using namespace std;

//User Lib

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    short numI,sum;
    //Prompt for input
    cout<<"This Program calculates the sum of the numbers or a declared number,"<<endl;
    cout<<"starting from 1."<<endl;
    cout<<"Enter a positive integer value: "<<endl;
    cin>>numI;
    //Apply restrictions
    if(numI<0){
        //Indicate Error
        cout<<"The value you entered is negative. The value must be a positive integer value."<<endl;
        cout<<"Please restart the program and enter a positive integer value"<<endl;
        }else{ 
                //Loop and calculate sum   
                do{
                (sum=(numI+1)*numI/2);
                }while(numI<=0);{
                }
        //Display Sum If Qualified
        cout<<sum<<endl;
        }
    //Exit
    return 0;
}
