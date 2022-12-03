/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for (int i=0; i < 5; i++){
        int d;
        int b;
        int result;
        vector< int > binary;      
        cout << "Input Decimal: "; 
        cin >> d;
        cout << "";
        cout << "Input Base: ";
        cin >> b; 
        cout << "";
        while(d > 0){
        result = d % b;
        d /= b;
        binary.push_back(result);
        }
        cout << "Binary: ";
        for (auto ir = binary.rbegin(); ir != binary.rend(); ++ir){
        cout << *ir; 
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}
