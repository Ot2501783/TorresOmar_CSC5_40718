/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 18, 2015, 9:12 PM
 * Purpose: Gaddis_7thEd_Chap3_Prob3
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
    float test1, test2, test3, test4, test5;
    float totscr, avgscr;
    //Prompt user for scores
    cout<<fixed<<setprecision(1)<<showpoint;
    cout << " Enter test score 1 "<<endl;
    cin >> test1;
    cout << " Enter test score 2 "<<endl;
    cin >> test2;
    cout << " Enter test score 3 "<<endl;
    cin >> test3;
    cout << " Enter test score 4 "<<endl;
    cin >> test4;
    cout << " Enter test score 5 "<<endl;
    cin >> test5;
    //Calculate average
    totscr=test1+test2+test3+test4+test5;
    avgscr=totscr/5;
    //Display average
    cout << "The average test score was "<<avgscr<<endl;
    
    return 0;
}

