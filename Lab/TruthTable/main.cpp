/* 
 * File:   main.cpp
 * Author: Spyros Havadjia
 *      Purpose: Determine if Truth Table created in class
 *              Agrees with the logic of the computer.
 * Created on March 18, 2015, 9:37 AM
 */

//System Library
#include <iostream>
using namespace std;

//User Library

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "
        <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    //Output the first row of the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<endl;
    //Output second row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<endl;
    //Output third row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<endl;
    //Output fourth row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"      ";
    cout<<endl;
    //exit
    return 0;
}

