/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 13, 2015, 8:48 PM
 * 
 */

#include <iostream>
using namespace std;

//User Libraries 

//Global Constants
const int CNVHRMN=60;//Conversion from Hrs to Min
const int CNVMNSC=60;//Conversion from Min to Sec

//Function Prototypes

//Esecution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float mph;//Miles per hour on a treadmill
    float hpm;//Pace as hours per mile
    float fmpm;//Miles per minute as a float 
    int impm;//Miles per minute as an integer
    float fmspm;//Fraction left for seconds per mi
    //Prompt for the input
    cout<<"How many miles are you running"<<endl;
    cout<<"in an hour"<<endl;
    cout<<"Format answer as a float."<<endl;
    cin>>mph;
    //Calculate the relevant pace 
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //Output the results
    cout<<mph<<" mph "<< endl;
    cout<<impm<<" hpm "<< endl;
    cout<<fmspm<<" (sec) per mile" <<endl;
    //Exit stage right 
    
    
   
    return 0;
}

