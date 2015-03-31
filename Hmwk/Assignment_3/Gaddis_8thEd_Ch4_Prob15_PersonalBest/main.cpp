/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Assignment 3
 *              Personal Best
 * Created on March 23, 2015, 10:42 AM
 */

//System Libraries
#include <iostream>
#include<string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Define Variables
    float vlt1,vlt2,vlt3;
    string name;
    string date1,date2,date3;
//Begin display
    cout<<"This program calculates Personal Best of entered Pole Vaulter"<<endl;
//Prompt for inputs
    cout<<"Enter the name of the pole vaulter."<<endl;
    getline(cin, name);
    cout<<"Enter the first date."<<endl;
    getline(cin, date1);
    cout<<"Enter the first vault height(meters)."<<endl;
    cin>>vlt1;
    cin.ignore();
    cout<<"Enter the second date."<<endl;
    getline(cin, date2);
    cout<<"Enter the second vault height(meters)."<<endl;
    cin>>vlt2;
    cin.ignore();
    cout<<"Enter the final date."<<endl;
    getline(cin, date3);
    cout<<"Enter the final vault height(meters)."<<endl;
    cin>>vlt3;
    cin.ignore();
    cout<<endl;
    //conditioning
    if((vlt1<2.0 || vlt2<2.0 || vlt3<2.0) || (vlt1>5.0 || vlt2>5.0 || vlt3>5.0)){
        cout<<"Vault must be positive for all of the above inputs."<<endl<<"Restart the program and try again"<<endl;
    }else if(vlt1>vlt2 && vlt1>vlt3){//vault1 Best
        if(vlt2>vlt3){ //
            cout<<date1<<" Is "<<name<<"'s best with a height of "<<vlt1<<endl;
            cout<<date2<<" Is "<<name<<"'s second best with a height of "<<vlt2<<endl;
            cout<<date3<<" Is "<<name<<"'s third best with a height of "<<vlt3<<endl;
        }else if(vlt2<vlt3){
            cout<<date1<<" Is "<<name<<"'s best with a height of "<<vlt1<<endl;
            cout<<date3<<" Is "<<name<<"'s second best with a height of "<<vlt3<<endl;
            cout<<date2<<" Is "<<name<<"'s third best with a height of "<<vlt2<<endl;
        }
    }else if(vlt2>vlt1 && vlt2>vlt3){ //vault2 best
        if(vlt1>vlt3){
            cout<<date2<<" Is "<<name<<"'s best with a height of "<<vlt2<<endl;
            cout<<date1<<" Is "<<name<<"'s second best with a height of "<<vlt1<<endl;
            cout<<date3<<" Is "<<name<<"'s third best with a height of "<<vlt3<<endl;
        }else if(vlt1<vlt3){
            cout<<date2<<" Is "<<name<<"'s best with a height of "<<vlt2<<endl;
            cout<<date3<<" Is "<<name<<"'s second best with a height of "<<vlt3<<endl;
            cout<<date1<<" Is "<<name<<"'s third best with a height of "<<vlt1<<endl;
        }
    }else if (vlt3>vlt1 && vlt3>vlt2){//vault3 best
        if(vlt1>vlt2){
            cout<<date3<<" Is "<<name<<"'s best with a height of "<<vlt3<<endl;
            cout<<date1<<" Is "<<name<<"'s second best with a height of "<<vlt1<<endl;
            cout<<date2<<" Is "<<name<<"'s third best with a height of "<<vlt2<<endl;
        }else if(vlt1<vlt2){
            cout<<date3<<" Is "<<name<<"'s best with a height of "<<vlt3<<endl;
            cout<<date2<<" Is "<<name<<"'s second best with a height of "<<vlt2<<endl;
            cout<<date1<<" Is "<<name<<"'s third best with a height of "<<vlt1<<endl;
        }
    }
    //exit
    return 0;
}

