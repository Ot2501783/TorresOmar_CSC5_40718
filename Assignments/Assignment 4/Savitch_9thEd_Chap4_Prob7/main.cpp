/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 22, 2015, 8:25 PM
 * Purpose: Savitch_9thEd_Chap4_Prob7_v1
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int strhrs, strmin, strisam=false;
    int endhrs, endmin, endisam=false;
    char ap,dummy;
    //Prompt for the start time
    cout << " Input the start time "<<endl;
    cout << " The hour, the minutes and AM or PM "<<endl;
    cin >> strhrs>>strmin>>ap>>dummy;
    cout << " You input "<<strhrs<<":"<<strmin<<" "<<ap<<"m"<<endl;
    //Declare Variables
    if(ap=='A'||ap=='a')strisam=true;
    //Prompt for the end time
    cout << " Input the end time "<<endl;
    cout << " The hour, the minutes and AM or PM "<<endl;
    cin >> endhrs>>endmin>>ap>>dummy;
    cout << " You input "<<endhrs<<":"<<endmin<<" "<<ap<<"m"<<endl;
    if(ap=='A'||ap=='a')endisam=true;
    //Calculate the minutes for each
    if(!strisam)strhrs+=12;
    int strtime=strhrs*60+strmin;
    if(!strisam)endhrs+=12;
    int endtime=endhrs*60+endmin;
    int diffmin=endtime-strtime;
    int hrs=diffmin/60;
    int min=diffmin-hrs*60;
    //Output the results
    cout << " The difference in time = ";
    cout <<hrs<<":"<<min<<endl;
    
    return 0;
}

