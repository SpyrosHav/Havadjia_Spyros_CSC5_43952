/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *     Purpose: Assignment 3
 *          Mass And Weight
 * Created on March 30, 2015, 2:58 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Variable declaration
    float weight,height,BMI;
    //Prompt for input
    cout<<"This program calculates your Body Mass Index(BMI) and evaluates if"<<endl;
    cout<<"you are over or underweight, OR if youre BMI is optimal."<<endl;
    cout<<endl;
    cout<<"What is your weight(in pounds(lbs)):"<<endl;
    cin>>weight;
    cout<<"What is your height(in inches(in)):"<<endl;
    cin>>height;
    //calculate
    BMI=(weight*703)/(height*height);
    //Begin output
        if (BMI>25){
            cout<<"Oh no! You're Overweight!"<<endl<<"BMI: "<<BMI<<endl;
        }else if(BMI<18.5){
            cout<<"Oh no! You're Underweight"<<endl<<"BMI: "<<BMI<<endl;
        }else{
            cout<<"Your BMI is: "<<BMI<<" and is considered optimal. Good Job!"<<endl;
        }
    return 0;
}

