/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 13, 2015, 8:54 PM
 * Purpose: Gaddis_7thEd_Chap3_Prob12
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
    //Declare Variable 
    string month,year;
    float totCash,sales,dolSTax,dolCTax;
    float sSlsTax=4e-2f, cSlsTax=2e-2f;
//Prompt for input
    cout<<"What month of sales to calculate"<<endl;
    getline(cin,month);
    cout<<"What year of sales to calculate?"<<endl;
    getline(cin,year);
    cout<<"What was the total cash received?"<<endl;
    cin>>totCash;
    //Calculations required 
    sales=totCash/(1+sSlsTax+cSlsTax);
    dolSTax=sales*sSlsTax;
    dolCTax=sales*cSlsTax;
    //output everything
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Month:   "<<month<<" Year: "<<year<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Total Collected:       $ "<<setw(8)<<totCash<<endl;
    cout<<"Sales:                 $ "<<setw(8)<<sales<<endl;
    cout<<"County Sales Tax:      $ "<<setw(8)<<cSlsTax<<endl;
    cout<<"State Sales Tax:       $ "<<setw(8)<<sSlsTax<<endl;
    cout<<"Total Sales Tax:       $ "<<setw(8)<<cSlsTax+sSlsTax<<endl;
    return 0;
}

