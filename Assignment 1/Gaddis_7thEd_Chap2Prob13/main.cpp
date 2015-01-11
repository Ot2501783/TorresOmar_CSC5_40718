/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 10, 2015, 7:57 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap2_Prob13)
 */
//system Libraries
#include <iostream>
using namespace std;

//User Libraries
  
//Global Constants  

//Function Prototypes
  
// Execution Begins here
int main(int argc, char** argv) {
//Declare variables
    float cstbrd=12.67;//Cost of board in $
    float prftmrg=1.4;//Mark up of the boards 40%
    //Calculate selling price
    float sllprc=cstbrd*prftmrg;
    //Out put the results
    cout<<" If you buy a board that cost "<<cstbrd<<endl;
    cout<<" And you want to mark it up 40%"<<endl;
    cout<<" The board should be sold at "<<endl;
    cout<<"$"<<sllprc;
    return 0;
}

