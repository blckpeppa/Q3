// function max() takes 3 int input ,returns the max of the 3
// program takes 3 int and outputs the greatest
#include <iostream>
using namespace std;

//start of max() function
//int means that the function expects a return value of int
int max(int x,int y,int z){
    int maximum;
    //check which parameter is the greatest
    if(x > y && x > z){
        maximum = x ;
    }
    else if(y > x && y > z){
        maximum = y;
    }
    else{
        maximum = z;
    }
    
    return maximum;
}

//start of main function
int main() {
    int num1,num2,num3,greatest;
    // prompt user to enter number
    cout << "Hi,enter 3 numbers below and we'll tell you which is the greatest"<<endl;
    cout<< "number 1: ";
    cin >> num1; 
    cout<<"number 2: ";
    cin >>num2;
    cout<< "number 3: ";
    cin >>num3;

    //call max() function
    greatest = max(num1,num2,num3);

    cout << greatest << " ,is the greatest number";
    return 0;
}