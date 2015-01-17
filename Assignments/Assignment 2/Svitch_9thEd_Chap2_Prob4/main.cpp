/* 
 * File:   main.cpp
 * Author: Omar Torres
 * Created on January 17, 2015, 12:59 AM
 * Purpose:Savitch_9thEd_Chap2_Prob4
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
    //Prompt user for inputs
    string iname, ilname, ifname; 
    cout << " What is your instructors first and last name? "<<endl;
    cin >> iname >> ilname;
    ifname=iname + " " + ilname;
    string yname;
    cout << " What is your name? "<<endl;
    cin >> yname;
    string food;
    cout << " Name a food. "<<endl;
    cin >> food;
    string numb;
    cout << " Choose a number between 100-120 "<<endl;
    cin >> numb;
    string adj;
    cout << " Choose a adjective "<<endl;
    cin >> adj;
    string color;
    cout << " Choose a color "<<endl;
    cin >> color;
    string anml;
    cout << " Choose an animal "<<endl;
    cin >> anml;
    //Output the story
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
            
    cout<<" Dear Instructor "<<ifname<<","<<endl;
    cout<<" I am sorry that I am unable to turn in my homework at this time. First, "<<endl;
    cout<<" I ate a rotten "<<food<<" witch made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<" I came down with a fever of "<<numb<<". Next my "<<adj<<" pet "<<endl;
    cout<<" "<<anml <<" must have smelled the remains of the "<<food<<" on my homework, "<<endl;
    cout<<" because he ate it. I am currently rewriting my homework and hope you "<<endl;
    cout<<" will accept it late."<<endl;
    
    cout<<" Sincerely,"<<endl;
    cout<<" "<<yname<<endl;
                      
     
   return 0;
}

