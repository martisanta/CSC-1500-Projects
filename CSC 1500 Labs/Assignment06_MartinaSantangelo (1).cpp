/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Method One
    cout << "Method One: For Loop Method" << endl;
    int n;
    int i = 1;
    int result = 0;
    cout << "Enter number: ";
    cin >> n;
    int numofoperations = 0;
    while(i <= n){
        result += i;
        numofoperations+=2;
        i++;
    }
    cout << "Result: " << result << endl;
    cout << "Number of Operations: " << numofoperations << endl;
    cout << endl;
    //Method Two 
    cout << "Method Two: Formula Method" << endl;
    int result2;
    int numofoperations2 = 3;
    result2 = (n*(n + 1)) / 2;
    cout << "Result: " << result << endl;
    cout << "Number of Operations: " << numofoperations2 << endl;
    if (numofoperations2 > numofoperations){
        cout << "The second method uses more arithmetic operations." << endl;
    }
    else if (numofoperations == numofoperations2){
        cout << "Both methods use an equal number of arithmetic operations." << endl;
    }
    else{
        cout << "The first method uses more arithmetic operations."<< endl;
    }
    return 0;
}