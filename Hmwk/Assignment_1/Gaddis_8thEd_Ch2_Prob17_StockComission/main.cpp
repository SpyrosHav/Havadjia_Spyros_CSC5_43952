/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment_1
 *              Stock Commission
 * Created on March 8, 2015, 5:37 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes

//Execution
int main(int argc, char** argv) {
        //Input/Identify Variables
        //Known
    unsigned short nShrs,sPrc;
    float sCmsn;
    nShrs=600;
    sPrc=21.77;
    sCmsn=0.02;
        //Unknown
    unsigned short stckPrc,cmsnPrc,ttlPrc;
    stckPrc=nShrs*sPrc;
    cmsnPrc=stckPrc*sCmsn;
    ttlPrc=stckPrc+cmsnPrc;
        //Begin Output
    cout<<"This program will calculate the amount paid for Kathryn's Stock Commission Purchase"<<endl;
            //Stock Alone Payment
    cout<<"Total Amount paid for Stock Alone:"<<endl;
    cout<<"$"<<stckPrc<<endl;
            //Commission Owed
    cout<<"The amount necessary to pay for Comission is:"<<endl;
    cout<<"$"<<cmsnPrc<<endl;
            //Total Payment (Stock+Commission)
    cout<<"The Total amount to be paid including commission is:"<<endl;
    cout<<"$"<<ttlPrc<<endl;
    
    //Exit
            
    return 0;
}

