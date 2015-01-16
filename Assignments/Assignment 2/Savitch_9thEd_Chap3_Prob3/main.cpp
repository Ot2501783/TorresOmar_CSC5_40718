/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 13, 2015, 9:21 PM
 * Purpose: Savitch_9thEd_Chap3_Prob3
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool cusp=false;
    int month,day;
    string sign;
    //Prompt for the input
    cout<<"Input the numerical/integer month you were born in"<<endl;
    cin>>month;
    cout<<"Input the integer day you were born on"<<endl;
    cin>>day;
    //Determine the sign
    if(month==1&&day<20)sign="Capricorn";
    else if(month==1&&day>=20)sign="Aquarius";
    else if(month==2&&day<=18)sign="Aquarius";
//Output the sign and the cusp
    if (month==1&&day>18&&<22)cusp=true;
    if (month==2&&day>16&&<20)cusp=true;
    cout<<"your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
    return 0;
}

