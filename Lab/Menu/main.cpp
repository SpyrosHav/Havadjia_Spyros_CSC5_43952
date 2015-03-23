/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Example of Menu coding
 * 
 * Problem 1-> Sum the Numbers between 1 and 10
 * Problem 2->Multiply the numbers between 1 and 10
 * Problem 3-> Divide te numbers between 1 and 10
 * Created on March 23, 2015, 9:36 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//General Format of Menu
    //Display Selections
    cout<<"Type 1 to solve problem 1."<<endl;
    cout<<"Type 2 to solve problem 2."<<endl;
    cout<<"Type 3 to solve problem 3."<<endl;
    cout<<"Type anything else to exit wihout solution."<<endl;
    //read in choices
    char choice;
    cin>>choice;
    //Solve choice
    switch(choice){
        case '1':{
            int sum=1+2+3+4+5+6+7+8+9+10;
            cout<<endl;
            cout<<"Solution to Problem 1, sum(1->10)= "<<sum<<endl;
            cout<<endl;
            break;
        }
        case '2':{
            int prod=1*2*3*4*5*6*7*8*9*10;
            cout<<endl;
            cout<<"Solution n!(1->10)= "<<prod<<endl;
            cout<<endl;
            break;
        }
        case '3':{
            float quot=1.0f/2/3/4/5/6/7/8/9/10;
            cout<<endl;
            cout<<"Solution to 3 quot(1->10)= "<<quot<<endl;
            cout<<endl;
        }
        default:{
                    cout<<"Exit!"<<endl;
        }
    };
    //Exit
    return 0;
}