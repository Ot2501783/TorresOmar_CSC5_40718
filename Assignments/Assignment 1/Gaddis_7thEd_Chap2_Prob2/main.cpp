/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 11, 2015, 1:57 PM
 * Purpose: Homework Assignment (Gaddis_7thEd_Chap2_Prob2)
 */
//system Libraries
#include <iostream>
using namespace std;

//User Libraries
  
//Global Constants
float pctsls=.62; //Percent of sales for The East Coast Division

//Function Prototypes
  
// Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    int ttlsls=4600000;//Total company sales
    int ecsdiv;
    //Calculate sales of East Coast Div
    ecsdiv=ttlsls*pctsls;
    cout<<"Total sales = "<<ttlsls<<endl;
    cout<<"The East Coast sales division was 62% of total sales"<<endl;
    cout<<"The East Coast sales division made "<<ecsdiv<<endl;

    return 0;
}

