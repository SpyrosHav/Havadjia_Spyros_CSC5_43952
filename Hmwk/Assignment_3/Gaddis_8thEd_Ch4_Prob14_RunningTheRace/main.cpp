/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 3
 *              Running the Race
 * Created on March 23, 2015, 10:42 AM
 */

//Sstem Libraries
#include <iostream>
#include<string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Define Variables
    float tme1,tme2,tme3;
    string rnnr1,rnnr2,rnnr3;
//Begin display
    cout<<"This program calculates 1st 2nd and 3rd place for specified runners"<<endl<<" of te race"<<endl;
//Prompt for inputs
    cout<<"Enter the name of the first runner."<<endl;
    getline(cin, rnnr1);
    cout<<"Enter the time of the first runner."<<endl;
    cin>>tme1;
    cin.ignore();
    cout<<"Enter the name second runner."<<endl;
    getline(cin, rnnr2);
    cout<<"Enter the time of the second runner."<<endl;
    cin>>tme2;
    cin.ignore();
    cout<<"Enter the name of the third runner."<<endl;
    getline(cin, rnnr3);
    cout<<"Enter the time of the third runner"<<endl;
    cin>>tme3;
    //conditioning
    if(tme1<0 || tme2<0 || tme3<0){
        cout<<"Time must be positive for all of the above inputs."<<endl<<"Restart the program and try again"<<endl;
    }else if(tme1<tme2 && tme1<tme3){
        if(tme2<tme3){ //2nd place to runnr2
            cout<<rnnr1<<" came in first with a time of "<<tme1<<endl;
            cout<<rnnr2<<" came in second with a time of "<<tme2<<endl;
            cout<<rnnr3<<" came in third with a time of "<<tme3<<endl;
        }else if(tme2>tme3){//2nd place to runner3
            cout<<rnnr1<<" came in first with a time of "<<tme1<<endl;
            cout<<rnnr3<<" came in second with a time of "<<tme3<<endl;
            cout<<rnnr2<<" came in third with a time of "<<tme2<<endl;
        }
    }else if(tme2<tme1 && tme2<tme3){
        if(tme1<tme3){
            cout<<rnnr2<<" came in first with a time of "<<tme2<<endl;
            cout<<rnnr1<<" came in second with a time of "<<tme1<<endl;
            cout<<rnnr3<<" came in third with a time of "<<tme3<<endl;
        }else if(tme1>tme3){
            cout<<rnnr2<<" came in first with a time of "<<tme2<<endl;
            cout<<rnnr3<<" came in second with a time of "<<tme3<<endl;
            cout<<rnnr1<<" came in third with a time of "<<tme1<<endl;
        }
    }else if (tme3<tme1 && tme3<tme2){
        if(tme1<tme2){
            cout<<rnnr3<<" came in first with a time of "<<tme3<<endl;
            cout<<rnnr1<<" came in second with a time of "<<tme1<<endl;
            cout<<rnnr2<<" came in third with a time of "<<tme2<<endl;
        }else if(tme1>tme2){
            cout<<rnnr3<<" came in first with a time of "<<tme3<<endl;
            cout<<rnnr2<<" came in second with a time of "<<tme2<<endl;
            cout<<rnnr1<<" came in third with a time of "<<tme1<<endl;
        }
    }
    return 0;
}

