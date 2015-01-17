/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 17, 2015, 11:24 AM
 * Purpose:Savitch_9thEd_Chap2_Prob1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
int mtrcton=35273.92; //One metric ton is equal to 35273.92 Oz 
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float wghtcrl; //Weight of a box of cereal in OZ 
    float wghtmt; //Weight of the cereal in metric tons
    float numbox; //Number of boxes for one metric ton
    char answer;
    do{ 
    //Prompt to input weight
    cout << " How many ounces in your box of cereal? "<<endl;
    cin >> wghtcrl; 
    //Calculate weight in metric tons and number of boxes in one metric ton
    wghtmt=wghtcrl/mtrcton;
    numbox=1/wghtmt;
    //Display results
    cout << " Your cereal box weighs "<<wghtmt<<" Metric Tons "<<endl;
    cout << " You would need "<<numbox<< " boxes to have one Metric Ton "<<endl;
    //Ask to repeat the operation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Type Y for yes or N for no"<<endl;
    cin>>answer;
    }
     while (answer=='Y'||answer=='y');
     
    
    /*
    //Prompt for weight input
    cout << " How many ounces in your box of cereal? "<<endl;
    cin >> wghtcrl; 
    //Calculate weight in metric tons and number of boxes in one metric ton
    wghtmt=wghtcrl/mtrcton;
    numbox=1/wghtmt;
    //Display results
    cout << " Your cereal box weighs "<<wghtmt<<" Metric Tons "<<endl;
    cout << " You would need "<<numbox<< " boxes to have one Metric Ton "<<endl;
    }*/ 

    return 0;
}

