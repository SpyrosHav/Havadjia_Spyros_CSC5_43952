/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 3
 *              Geometry Calculator
 * Problem 1-> Solve area of a circle.
 * Problem 2->solve area of a rectangle.
 * Problem 3-> area of a triangle.
 * Created on March 30, 2015, 9:36 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
        float pi=3.14159;
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Display Selections
    cout<<"Type 1 to solve area of a circle."<<endl;
    cout<<"Type 2 to solve area of a rectangle."<<endl;
    cout<<"Type 3 to solve area of a triangle."<<endl;
    cout<<"Type 4 to exit."<<endl;
    //read in choices
    char choice;
    cin>>choice;
    //Solve choice
    switch(choice){
        case '1':{
            float r,areaC;
            cout<<"What is the radius(r)?"<<endl;
            cin>>r;
            //implement condition of r>0
                if (r>0){
                                cout<<endl;
                                areaC=pi*pow(r,2);
                                cout<<"Area= "<<areaC<<endl;
                                cout<<endl;
                        }
                else{
                    cout<<"The Radius cannot be zero or negative."<<endl;
                }
            break;
        }
        case '2':{
            unsigned int width,length,areaR;
            cout<<"What is the length and the width of the rectangle?(Seperate"<<endl<<"using a space)"<<endl;
            cin>>length>>width;
            //implement condition of inputs>0
                if (length<1){
                        cout<<"Neither the length nor width can be zero or negative."<<endl;
                }else if(width<1){
                        cout<<"Neither the length nor width can be zero or negative."<<endl;
                }else{
                        cout<<endl;
                    areaR=length*width;
                        cout<<"Area= "<<areaR<<endl;
                        cout<<endl;
                }
            break;
        }
        case '3':{
            unsigned int base,height,areaT;
            cout<<"What is the base and the height of the triangle?(Seperate"<<endl<<"using a space)"<<endl;
            cin>>base>>height;
            //implement condition of inputs>0
                if (base<1){
                        cout<<"Neither the base nor height can be zero or negative."<<endl;
                }else if(height<1){
                        cout<<"Neither the base nor height can be zero or negative."<<endl;
                }else{
                        cout<<endl;
                        areaT=0.5*base*height;
                        cout<<"Area= "<<areaT<<endl;
                        cout<<endl;
                }
            break;
        }
        default:{
                        cout<<"Exit!"<<endl;
        }
    };
    //If choice is not part of menu
                if (choice>4){
                        cout<<"You did not enter a valid menu option. "<<endl;
        };
    //Exit
    return 0;
}