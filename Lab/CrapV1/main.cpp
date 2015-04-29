/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *              Purpose: Craps
 * DIDNT CALCULATE MAXNTHROWS COPY FROM LEHR
 * Created on April 29, 2015, 10:27 AM
 */

#include <cstdlib>//For randoms
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char, unsigned char);
//Execution
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Vaiables
    int win=0,lose=0,nThrows=0,nGames=10000;
    int thwGame=0, maxNThw=0;
    //Loop on the games and take Stats
    for(int game=1;game<=nGames;game++){
        int sum=roll(2,6);
        nThrows++;
        thwGame=1;
        if(sum==2||sum==3||sum==12)lose++;
        else if(sum==7||sum==11)win++;
        else{
            //Keep throwing
            bool rollAgn;
            do{
                rollAgn=true;
                int sum2=roll(2,6);
                nThrows++;
                thwGame++;
                if(sum2==sum){
                    win++;
                    rollAgn=false;
                }else if(sum2==7){
                    lose++;
                    thwGame++;
                    rollAgn=false;
                }    
            }while(rollAgn);
        }
        
    }
    //Output wins and losses
    cout<<"Total Number Of Games "<<nGames<<endl;
    cout<<"Total Number Of Wins "<<win<<endl;
    cout<<"Number Of Games Lost "<<lose<<endl;
    cout<<"Total number of win+lose "<<win+lose<<endl;
    cout<<"Percentage of win "<<100.0f*win/nGames<<"%"<<endl;
    cout<<"Percentage of lose "<<100.0f*lose/nGames<<"%"<<endl;
    cout<<"Number of throws "<<nThrows<<endl;
    cout<<"Average throw per game = "<<1.0f*nThrows/nGames<<endl;
    cout<<"Max throws in any game = "<<maxNThw<<endl;
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}