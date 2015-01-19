/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 18, 2015, 8:24 PM
 * Purpose: Gaddis_7thEd_Chap3_Prob2
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    short classA=15, classB=12, classC=9;// all in dollars
    short nbrclsa, nbrclsb, nbrclsc;//Number of tickets sold per section 
    float slscla, slsclb, slsclc, totsls; //in dollars
    //Prompt user for inputs
    cout << "How many class A tickets were sold? (at 15.00$)"<<endl;
    cin >> nbrclsa;
    cout << "How many class B tickets were sold? (at 12.00$)"<<endl;
    cin >> nbrclsb;
    cout << "How many class C tickets were sold? (at 9.00$)"<<endl;
    cin >> nbrclsc;
    cout<<fixed<<setprecision(2)<<showpoint; 
    //Preform calculations
    slscla=classA*nbrclsa;
    slsclb=classB*nbrclsb;
    slsclc=classC*nbrclsc;
    totsls=slscla+slsclb+slsclc;
    //Display output
    cout << " Total sales for Class A were= "<<slscla<< " $ "<<endl;
    cout << " Total sales for Class B were= "<<slsclb<< " $ "<<endl;
    cout << " Total sales for Class C were= "<<slsclc<< " $ "<<endl;
    cout << " Total sales were=            "<<totsls<<" $ "<<endl;
            
    
    return 0;
}

