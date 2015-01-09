/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 8, 2015, 7:45 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap11_Prob12)
 */

#include <iostream>
#include <iomanip>
using namespace std;

 //User Libraries
  
  //Global Constants 
 
  //Function Prototypes
  
  // Execution Begins here
int main(int argc, char** argv) {
//Declare and Initialize Variables
    float gasTank=20;//Max gallons in out gas tank
    float inTown=21.5;//In town miles per gallon 
    float onHway=26.8;//Highway miles per gallon 
    //Calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    //Output results 
    cout<<"Distance in town on a tank of gas = "<<
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance in highway on a tank of gas = "<<
    cout<<disTown<<"(miles)"<<endl;
    return 0;
}

