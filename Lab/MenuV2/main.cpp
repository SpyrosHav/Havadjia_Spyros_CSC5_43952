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
#include <iomanip>
#include <fstream>
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
    cout<<"Type 4 to solve problem Cable Bill."<<endl;
    cout<<"Type anything else to exit without solution."<<endl;
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
        case '4':{
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
                        }
        default:{
                    cout<<"Exit!"<<endl;
        }
    };
    //Exit
    return 0;
}