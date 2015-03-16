/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *              Purpose:Paycheck->Independant IF Statements
 * Created on March 16, 2015, 8:11 AM
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
    float hrsWkd;//Hours Worked (hrs)
    float payRate;//Pay Rate ($'s/hr)
    float oRate=1.5f;//Multiplicative factor of PayRate
    float oTime=40.0f;//Where Overtime Begins (hr)
    float payChk;//Gross Pay ($'s)
    //Open the file
    out.open("Payroll.dat");
    //Prompt User For Input
    cout<<"How many hours did you work this week?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your Pay Rate?"<<endl;
    cin>>payRate;
    //Calculate the paycheck
        if(hrsWkd<oTime){
                payChk=payRate*hrsWkd; //1st IF statement
   }
        if(hrsWkd>=oTime){
            payChk=payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));//2nd IF Statement
   }
    //Output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours Worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    cout<<"Overtime Rate = "<<oRate<<endl;
    cout<<"Overtime begins at = "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    //Output the results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours Worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    out<<"Overtime Rate = "<<oRate<<endl;
    out<<"Overtime begins at = "<<oTime<<"(hrs)"<<endl;
    out<<"Gross Pay = $"<<payChk<<endl;
    
    //Close the file
    out.close();
    
    return 0;
}