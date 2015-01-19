/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 18, 2015, 8:08 PM
 * Purpose: Gaddis_7thEd_Chap3_Prob1
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
    short nbrgal;
    float nbrmls, MPG;
    //Prompt user for inputs
    cout << " How many gallons of gas does your car hold? " << endl;
    cin >> nbrgal;
    cout << " How many miles can you drive your car on a full tank of gas?" << endl;
    cin >> nbrmls;
    //Preform calculations 
    MPG=nbrmls/nbrgal;
    //Display results
    cout << " Your car gets " << MPG <<" miles per gallon " << endl;
    
    
    return 0;
}

