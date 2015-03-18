/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 2
 *          Word Game
 * Created on March 17, 2015, 5:09 PM
 */

#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Properties

//Execution

int main(int argc, char** argv) {
    //Define Variables
    string uName,uCity,uCllge,uPrfsn,uAnim,uPName;
    unsigned short uAge;
    //Prompt for inputs
    cout<<"This is a Word Game Program! Lets put together a fun story together!"<<endl;
    cout<<"First, what's your name?"<<endl;
    getline(cin,uName);
    cout<<"Next, how old are you?"<<endl;
    cin>>uAge;
    cin.ignore();
    cout<<"Name a city you love!"<<endl;
    getline(cin,uCity);
    cout<<"Name a college of that city, or of a neighboring city."<<endl;
    getline(cin,uCllge);
    cout<<"And what profession do they specialize in preparing you for at that college?"<<endl;
    getline(cin,uPrfsn);
    cout<<"Name a type of pet people in that city would be likely to own."<<endl;
    getline(cin,uAnim);
    cout<<"Finally, what name would YOU give to such a pet?"<<endl;
    getline(cin,uPName);
    cout<<endl;
    cout<<"Fantastic! Now that we've learned all that, here's how our story goes:"<<endl<<endl;
    //Inputs applied and execute output
    cout<<"There once was a person named "<<uName<<" who lived in "<<uCity<<". At the age of "<<endl<<uAge<<", "<<uName<<" went to college at "<<uCllge<<". "<<uName<<" graduated and went to work "<<endl<<"as a "<<uPrfsn<<". Then, "<<uName<<" adopted a(n) "<<uAnim<<" named "<<uPName<<". They "<<endl<<"both lived happily ever after!"<<endl;
    //exit
    return 0;
}

