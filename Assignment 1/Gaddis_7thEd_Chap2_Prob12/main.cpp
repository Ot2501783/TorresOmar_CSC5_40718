/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 8, 2015, 7:45 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap2_Prob12)
 */

#include <iostream>
#include <iomanip>
using namespace std;

 //User Libraries
  
  //Global Constants 
const unsigned short CVFTACS=43560;//Acre conversion 
 
  //Function Prototypes
  
  // Execution Begins here


int main(int argc, char** argv) {
using namespace std;
 //Declare Variables
float inSqFt, outAcrs;
//Prompt for input
cout<< "Input the number of square feet \n";  
cout<<"to convert to Acres \n" ;
cin>>inSqFt;
//Calculate Acres
outAcrs=inSqFt/CVFTACS;
//Output the results
cout<<inSqFt<<"(sq feet) = ";
cout<<outAcrs<< "(acres) \n";  
    return 0;
}
