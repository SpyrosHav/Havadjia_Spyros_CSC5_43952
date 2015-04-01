/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Play the Monty Hall Game
 * Analyze staying with your fist door choice
 * OR
 * Changing to the other door
 * Created on March 30, 2015, 10:19 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //set randome number generator/seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned int nGames,win=0,lose=0;
    unsigned int door,doorOpn,prize,othDoor;
    char stay;
    //Prompt for inputs
    cout<<"This is the Monty Hall Game 'Let's make a deal!'"<<endl;
    cout<<"How many games would you like to play?(1-4x10^9)"<<endl;
    cin>>nGames;
    cout<<"Are you going to stay if given the opportunity? Type S for Stay"<<endl;
    cout<<"Type anything else to choose the other door."<<endl;
    cin>>stay;
    //Loop for all the games
    for(int game=1;game<=nGames;game++){
        //Randomly choose your door
        door=rand()%3+1;
        //Randomly choose the pize door
        prize=rand()%3+1;
        //Randomly choose door to open
        do{
            doorOpn=rand()%3+1;
        }while(door==doorOpn||prize==doorOpn);//Cant be the same
        //Swap the doors if given the opportunity
        if(stay!='S'&&stay!='s'){//Use Demorgans law, to test validity
            //What is the other door?(The door not chosen)
                do{
            othDoor=rand()%3+1;
        }while(othDoor==doorOpn||othDoor==door);//Cant be the same
                                //Below is just a check to see if all random doors are different
                                //cout<<"D= "<<door<<"othD= "<<othDoor<<"opnD= "<<doorOpn<<"prz= "<<prize<<endl;     
        //When found now swap    
        door=othDoor;           
        }

        //Now, statistically count how many wins and losses
        if(door==prize)win++;
        else lose++;
    }
    //Output the results
    cout<<"Out of "<<nGames<<" played"<<endl;
    if(stay=='S'||stay=='s')cout<<"I am not changing my door, and "<<endl;
    else cout<<"I am changing my door, and "<<endl;
    cout<<"I win by staying ->"<<win<<" times"<<100.0f*win/nGames<<"%"<<endl;
    cout<<"Vesrus losing "<<lose<<" times!"<<100.0f*lose/nGames<<"%"<<endl;
    //exit
    return 0;
}

