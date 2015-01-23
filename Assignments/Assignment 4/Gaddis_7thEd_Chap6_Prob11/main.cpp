/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 22, 2015, 7:27 PM
 * Purpose: Gaddis_7thEd_Chap6_Prob11_v1
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float avg, min, max, input;
    //Read in the first data point 
    cout << " What is judge #1's score "<<endl;
    cin >> input;
    avg=max=min=input;
    //For loop to read in the next four values
    for (int readin=1;readin<=4;readin++){
    cout << " What is judge "<<readin<<"'s score"<<endl;
    cin >> input;
    if(max<input)max=input;
    if(min>input)min=input;
    avg+=input;
        
    }
//Calculate average
    avg=(avg-min-max)/3;
    //output results
    cout << " The average = "<<avg<<endl;
    //Exit stage right!
           
    return 0;
}

