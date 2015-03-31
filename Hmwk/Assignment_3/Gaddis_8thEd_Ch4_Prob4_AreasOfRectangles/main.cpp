/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 3
 *              Areas of Rectangles
 * Created on March 30, 2015, 9:36 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//define Variables
    unsigned int width1,length1,width2,length2,areaR1,areaR2;
    //prompt for inputs
    cout<<"What is the length and the width of the first rectangle?(Seperate"<<endl<<"using a space)"<<endl;
    cin>>length1>>width1;
    cin.ignore();
    cout<<"What is the length and the width of the second rectangle?(Seperate"<<endl<<"using a space)"<<endl;
     cin>>length2>>width2;
     //calculate
     areaR1=width1*length1;
     areaR2=width2*length2;
    //implement condition of inputs.
    if (areaR1>areaR2){
        cout<<"The First Rectangle has a greater area than the second Rectangle"<<endl;
        cout<<areaR1<<">"<<areaR2<<endl;
    }else if(areaR1<areaR2){
        cout<<"The Second Rectangle has a greater area than the first Rectangle"<<endl;
        cout<<areaR1<<"<"<<areaR2<<endl;
    }else if(areaR1==areaR2){
        cout<<"The two Rectangles have the same area."<<endl;
    }
    //Exit
    return 0;
    }