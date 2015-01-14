/* 
 * File:Truth Table 
 * Author: Omar Torres
 * Created on January 13, 2015, 6:30 PM
 * Purpose: Truth Table
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X,Y;
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&Y?'T':'F')<<"   ";
    cout<<(X||Y?'T':'F')<<"           ";
    cout<<(X^Y?'T':'F')<<"  ";
    cout<<(X^Y^Y?'T':'F')<<"        ";
    cout<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<((!X&&!Y)?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<endl;
    
      Y=true;X=true;
    cout<<(Y?'T':'F')<<" ";
    cout<<(X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(Y&X?'T':'F')<<"  ";
    cout<<(Y||X?'T':'F')<<"        ";
    cout<<(Y^X?'T':'F')<<"";
    cout<<(Y^X^X?'T':'F')<<"        ";
    cout<<(Y^X^Y?'T':'F')<<"       ";
    cout<<(!(Y||X)?'T':'F')<<"     ";
    cout<<((!Y&&!X)?'T':'F')<<"     ";
    cout<<(!(Y&&X)?'T':'F')<<"      ";
    cout<<(!Y||!X?'T':'F')<<"        ";
    cout<<endl;
    
      Y=false;X=false;
    cout<<(Y?'T':'F')<<" ";
    cout<<(X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"   ";
    cout<<(Y&X?'T':'F')<<"  ";
    cout<<(Y||X?'T':'F')<<"        ";
    cout<<(Y^X?'T':'F')<<"";
    cout<<(Y^X^X?'T':'F')<<"        ";
    cout<<(Y^X^Y?'T':'F')<<"       ";
    cout<<(!(Y||X)?'T':'F')<<"     ";
    cout<<((!Y&&!X)?'T':'F')<<"     ";
    cout<<(!(Y&&X)?'T':'F')<<"      ";
    cout<<(!Y||!X?'T':'F')<<"        ";
    cout<<endl;
    
       Y=false;X=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&Y?'T':'F')<<"  ";
    cout<<(X||Y?'T':'F')<<"        ";
    cout<<(X^Y?'T':'F')<<"";
    cout<<(X^Y^Y?'T':'F')<<"        ";
    cout<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<((!X&&!Y)?'T':'F')<<"     ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"        ";
    cout<<endl;
    return 0;
}

