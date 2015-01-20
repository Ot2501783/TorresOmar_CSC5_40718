/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 19, 2015, 8:01 PM
 * Purpose: Gaddis_7thEd_Chap3_Prob4
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float wght=9.2;//Widget weight in pounds 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables 
    float wghtplt,whtpltw,nbrwdg,whtwdg;//Weight in pounds
    //Prompt user for inputs
    cout << " How much does the pallet weight? "<<endl;
    cin >> wghtplt;
    cout << " How much does the pallet weigh with the Widgets? "<<endl;
    cin >> whtpltw;
    //Calculate number of widgets per pallete
    whtwdg=whtpltw-wghtplt;
    nbrwdg=whtwdg/wght;
    //Display results
    cout << " You can fit "<< nbrwdg << " widgets on a pallet. " ;
    
    
    return 0;
}

