/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 8, 2015, 6:25 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_ProgProj1)
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int op1,op2,sum=0,prod=1;
    //Prompt for the two operands
    cout<<"Input 2 integers having a range of [-2^31,2^31-1]"<<endl;
    cin>> op1>> op2;
    //Calculate the sum and the products
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //Output the results 
    cout<<op1<<" + " <<op2<< " = "<<sum<<endl;
    cout<<op1<<" * " <<op2<< " = "<<prod<<endl;
              
    return 0;
}

