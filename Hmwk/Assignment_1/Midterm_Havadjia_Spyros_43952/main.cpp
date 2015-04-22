/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose:
 *      MIDTerm
 * cREATED on April 22, 2015, 9:00 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void InsertProblemHere();
void problem2();
void problem3();
void problem4();

//Execution
int main(int argc, char** argv) {
    //declare menu variable choice
        char choice;
    //repeat the menu
        do{
    //General Format of Menu
    //Display Selections
    cout<<"Type 1 to solve problem 1."<<endl;
    cout<<"Type 2 to solve problem 2."<<endl;
    cout<<"Type 3 to solve problem 3."<<endl;
    cout<<"Type 4 to solve problem 4."<<endl;
    cout<<"Type 5 to solve problem 5."<<endl;
    cout<<"Type 6 to solve problem 6."<<endl;
    cout<<"Type anything else to exit without solution."<<endl;
    //read in choices
    cin>>choice;
    //Solve choice
    switch(choice){
        case '1':{
                    //Define Block Variables
                    int num;
                    char c;
                    c=' ';
                    cout<<"This Program displays the number of lines of a number input"<<endl;
                    cout<<"Input the number"<<endl;
                    cin>>num;
                    for(int numb=num;num>=1;num--){
                        cout<<fixed<<setw(c=num)<<endl<<endl;
                        cout<<num<<endl;
                    }
                }
                break;
        case '2':{
                            //Define Block Variables
                           int number;
                           cout << "Enter an integer " << endl;
                    int number;
                    cin >> number;

                    //convert the number into digits
                    //lets say the number is 12345, of course this would require 5 variables,

                    int n1,n2,n3,n4,n5;

                    n1 = number%10;
                    number /= 10;
                    n2 = number%10;
                    number /= 10;
                    n3 = number%10;
                    number /= 10;
                    n4 = number%10;
                    number /=10;

                    cout << "n1 " << n1 << endl;
                    cout << "n2 " <<n2 << endl;
                    cout << "n3 " <<n3 << endl;
                    cout << "n4 " <<n4 << endl;
                    cout << "n5 " <<n5 << endl;
        }
        break;
       // case '3':problem3();break;
       // case '4':problem4();break;
        default:{
                    cout<<"Exit!"<<endl;
        }
    };
}while(choice>='1'&&choice<='6');
    //Exit
    return 0;
}
