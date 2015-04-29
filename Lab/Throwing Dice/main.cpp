/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *              Purpose: Throwing Dice
 *              Check out dice statistics
 * Created on April 29, 2015, 9:39 AM
 */

#include <cstdlib>//For randoms
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char, unsigned char);//number of dice and face of dice
//Execution
int main(int argc, char** argv) {
    //Declare Vaiables
    const int SIZE=13;
    int freq[SIZE]={};//Initialized whole array to zero({})
    int nRolls=36000;//Number of rolls
    int sum=0;//Add up times thrown
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Loop, Roll Dice, Take stats.
    for(int throws=1;throws<=nRolls;throws++){
        freq[roll(2,6)]++;//2 dice, 6 sides->These two give you a value between 2 and 12
    }
    //Print the results
    for(int value=0;value<SIZE;value++){//
        sum+=freq[value];
        cout<<"The dice rolled to "<<value<<", "<<freq[value]<<" times"<<endl;
    }
    cout<<"The dice were thrown: "<<nRolls<<"="<<sum<<" times."<<endl;
    //Exit
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}