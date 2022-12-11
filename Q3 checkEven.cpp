// program that takes user input and checks if num is even or odd
// outputs true if even and false if odd
#include <iostream>
using namespace std;

//start of check even function
//void means that this function isnt returning any value
void checkEven(int x){
    //check if parameter is even
    if(x%2 == 0){
        cout <<"true, "<< x << " ,is an even number";
    }
    else{
        cout<<"false, "<< x <<" ,is an odd number";
    }
}

//start of main function
int main() {
    int z;
    // prompt user to enter number
    cout << "Hi,enter any number and we'll tell you if its odd or even: ";
    cin >> z;
    
    //call checkEven() function
    checkEven(z);

    return 0;
}