/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 11, 2015, 2:23 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap2_Prob10)
 */
//system Libraries
#include <iostream>
//#include <iomanip>
using namespace std;

//User Libraries
  
//Global Constants
int galgas=12;//Gallons of gas the car can hold
int mlstrv=350;//Distance the car can travel before refilling tank
//Function Prototypes
  
// Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables 
    float mpg;
    //Calculate miles per gallon (MPG)
    mpg=mlstrv/galgas; 
    //Display results 
    cout<<"A car with a " << galgas <<" gallon tank of gas" <<endl;
    cout<<"That travels " << mlstrv <<" miles" <<endl;
    cout<<"Gets " << mpg << " MPG" << endl;
    
    
   
    return 0;
}

