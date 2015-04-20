/* 
 * File:   main.cpp
 * Author: Spyros Havadjia      
 *              Purpose:     
 * Created on April 20, 2015, 8:13 AM
 */

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

//User Libraies

//Global Constants

//Function Prototypes
float save1(float,float,int);   //POWER FUNCTION
float save2(float,float,int);  //EXPONENTIAL & LOG FUNCTION
float save3(float,float,int);  //FOR LOOP
float save4(float,float,int);  //RECURSIVE(Calling Itself))
//ONE Defaulted Parameter----> float save5(float,float,int=9);   //Defaulted Parameter
float save5(float=100.0f,float=0.08f,int=9);   //Defaulted ALL
void save6(float &,float,float,int); //Pass By Reference
void save7(float &,float,int);       //Pass By Reference
float save1(float,float,float); //Over-wWritten Function(Same Name)
//Execution
int main(int argc, char** argv) {
    //Declare Variables
    float pv=100.0f;//Present Value in $
    float iR=0.08f;//Interest rate%/yr
    int nC=9;//Number of Compounding Periods(Yeas)
    //Output inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Pesent Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<iR*100<<"%"<<endl;
    cout<<"Number of compounding periods = "<<nC<<" Years."<<endl<<endl;
    //Calculate our Savings
    cout<<"Savings Function 1 = $"<<save1(pv,iR,nC)<<endl;
    float nCf=nC;
    cout<<"Savings Function 1 = $"<<save1(pv,iR,nCf)<<endl;     //Can Also be 'Save1' b/c parameters differ
    cout<<"Savings Function 2 = $"<<save2(pv,iR,nC)<<endl;
    cout<<"Savings Function 3 = $"<<save3(pv,iR,nC)<<endl;
    cout<<"Savings Function 4 = $"<<save4(pv,iR,nC)<<endl;
    //ONE Defaulted Parameter----> cout<<"Savings Function 5 = $"<<save5(pv,iR)<<endl;   //nC removed because it was a Defaulted Parameter
    cout<<"Savings Function 5 = $"<<save5(pv,iR,nC)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv,iR)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv)<<endl;
    cout<<"Savings Function 5 = $"<<save5()<<endl;
    float fv;
    save6(fv,pv,iR,nC);
    cout<<"Savings Function 6 = $"<<fv<<endl;
    save7(pv,iR,nC);
    cout<<"Savings Function 7 = $"<<pv<<endl;
    return 0;
}

//Function for Future Value Calculation
//Inputs
//        p:PresentValue($)
//i:InterestRae for compounding Period
//n:Compounding Years
//OUTPUTS
//      fv:Future Value($)
float save1(float p,float i,int n){
    cout<<"Save 1 with Intiger N"<<endl;
    return p*pow((1+i),n);
}

float save1(float p,float i,float n){
    cout<<"Save 1 with Float N"<<endl;
    return p*pow((1+i),n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;   //First Return
    return save4(p,i,n-1)*(1+i);        //Second Return
}

float save5(float p,float i,int n){
    return p*pow((1+i),n);
}

void save6(float &f,float p,float i,int n){
    f=p*pow((1+i),n);
}

void save7(float &p,float i,int n){
    p=p*pow((1+i),n);
}