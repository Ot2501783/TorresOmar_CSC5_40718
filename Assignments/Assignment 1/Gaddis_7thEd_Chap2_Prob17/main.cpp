/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 8, 2015, 6:25 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap2_Prob17)
 */
//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
  
//Global Constants 
const char CONVPCT=100;//Percent Conversion 

//Function Prototypes
  
// Execution Begins here
int main(int argc, char** argv) {
    //Declare and initialize variables 
    float  skPrice=2.177e1f;//Stock Price in $'s
    unsigned short nShares=600;//Number of shares of stocks
    char comish=2;//2 percent sales commission 
    //Calculate sales price, commission and total in $'s
    float slPrice=nShares*skPrice; 
    float cmPrice=slPrice*comish/CONVPCT;
    float totPaid=slPrice+cmPrice;
    //output results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales Price = $"<<setw(8)<<slPrice<<endl;
    cout<<"Commission = $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Paid = $"<<setw(8)<<totPaid<<endl;
      //Exit Stage Right!
    return 0;
}

