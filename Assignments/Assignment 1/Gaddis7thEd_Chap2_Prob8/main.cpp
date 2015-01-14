/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 10, 2015, 9:13 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap2_Prob8)
 */
//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
  
//Global Constants
float stax=.06;//sales tax 6%

//Function Prototypes
  
// Execution Begins here
int main(int argc, char** argv) {
    
//Declare variables 
    float itm1=12.95;//in $ 
    float itm2=24.92;//in $
    float itm3=6.95;//in $
    float itm4=14.95;//in $
    float itm5=3.95;//in $
    float sbttl, ttl;
    //Display Items
    cout<<" Razors $ "<< itm1 <<endl;
    cout<<" Coffee Maker $ "<< itm2 <<endl;
    cout<<" COffe Beans $ "<< itm3 <<endl;
    cout<<" Shampoo $ "<< itm4 <<endl;
    cout<<" Candy $ "<< itm5 <<endl;
    //Get sub total 
    sbttl=itm1+itm2+itm3+itm4+itm5;
    //Display sub total
    cout<<"Sub Total = "<<sbttl<<endl;
    cout<<"Plus 6% sales tax"<<endl;
    //Get total including taxes
    ttl=(sbttl*stax) + sbttl; 
    //display total
    cout<<" Total $ " << fixed << setprecision(2) << ttl << endl;//Sets total to two decimal places
    
  
    return 0;
}

