/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 19, 2015, 4:59 PM
 * Purpose: Gaddis_7thEd_Chap3_Prob4
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string month1, month2, month3;
    float avgrn1, avgrn2, avgrn3,totavg;//Average rain in inches
    cout<<fixed<<setprecision(2)<<showpoint;
    //Prompt user for inputs
    cout << " Input month "<<endl;
    cin >> month1;
    cout << " Input average rainfall ";
    cin >> avgrn1;         
    cout << " Input month "<<endl;
    cin >> month2;
    cout << " Input average rainfall ";
    cin >> avgrn2;  
    cout << " Input month "<<endl;
    cin >> month3;
    cout << " Input average rainfall ";
    cin >> avgrn3;  
    //Calculate average rainfall
    totavg=(avgrn1+avgrn2+avgrn3)/3;
    //Display results 
    cout << " The average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<
            " is "<<totavg<<" inches. ";

    return 0;
}

