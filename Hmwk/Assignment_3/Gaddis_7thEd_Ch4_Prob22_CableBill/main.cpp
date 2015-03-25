/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *              Purpose:Assignment 3
 *              Cable Bill
 * Created on March 25, 2015, 8:11 AM
 */

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Properties

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;//Output the results in a file!!
    float vwdHrs;//Hours Viewed (hrs)
    char package;//Package AaBbCc
    const int SIZE=40;//Name may be a max of 39 characters
    char name[SIZE];//Customers Name
    float bill;//Bill of customer
    //Open the file
    out.open("Cable.dat");
    //Prompt User For Input
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your Package: A, B, C?"<<endl;
    cin>>package;
    cout<<"What is the customers name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    //Calculate said Bill
    switch(package){
        case 'A':
        case 'a':{
            bill=9.95;
                    if(vwdHrs>10)bill+=2*(vwdHrs-10);
            break;
        }
        case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=(vwdHrs-20);
            break;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
        default: cout<<"This is not a Package Option"<<endl;
    };
    //Output the results to the screen
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"This is our cable bill according to the information you entered:"<<endl;
    out<<"Customer Name: "<<name<<endl;
    out<<"Package: "<<package<<endl;
    out<<"Hours Viewed: "<<vwdHrs<<endl;
    out<<"Your Bill comes out to: "<<bill<<endl;
    //Close the file
    out.close();
    return 0;
}