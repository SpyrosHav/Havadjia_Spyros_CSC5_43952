/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose:Assignment 4
 *              Interface to a Fried Twinkie Machine
 * Created on April 8, 2015, 7:56 AM
 */

//System Lib's
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

//User Lib's

//Global Const's

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//declare variables
    const int SIZE=99;
    char input[SIZE]="";
    unsigned short totChg=0,cstTwnk=350;
    short nQrtrs,nDimes,nNckles;
    //Prompt for input
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The Original FRIED TWINKIE MACHINE!"<<endl;
    cout<<"Fried Twinkiecost is $3.50"<<endl;
    cout<<"Please give the amount of change(coins)"<<endl;
    cout<<"Input your change as a dollar, quarter, dime, nickels"<<endl<<endl;
    do{
        cout<<"Input Dollars/Coins"<<endl;
        cin>>input;
        cout<<input<<endl;
        if(strcmp(input,"Dollar")==0){
            totChg+=100;
        }else if(strcmp(input,"Quarter")==0){
            totChg+=25;
        }else if(strcmp(input,"Dime")==0){
            totChg+=10;
        }else if(strcmp(input,"Nickel")==0){
            totChg+=5;
        }else{
            cout<<"No Foney money please."<<endl;
        }
        cout<<"Total Change = $"<<totChg/100.0f<<endl;
   }while(totChg<cstTwnk);
     //Give Twinkie
     cout<<"Here is your FRIED TWINKIE"<<endl;
     //calculate the change
     totChg-=cstTwnk;
     cout<<"Your change is = $"<<totChg/100.0f<<endl;
     //How Many Quarters
          nQrtrs=totChg/25;
     if(nQrtrs>0) cout<<"Your Quarter Change is = "<<static_cast<int>(nQrtrs)<<endl;
     //Number of dimes
     totChg-=nQrtrs*25;
          nDimes=totChg/10;
     if(nDimes>0) cout<<"Your Dime Change is = "<<static_cast<int>(nDimes)<<endl;
          //Number of Nickels
     totChg-=nDimes*10;
          nNckles=totChg/5;
     if(nNckles>0) cout<<"Your DimNickel Change is = "<<static_cast<int>(nNckles)<<endl;
    return 0;
}

