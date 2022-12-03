/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


bool ONE (int a, int b, int c){
if(!( a || c ) ^ b)return true;
return false;
}
bool TWO (int a, int b, int c){
if(!((!b || c) && !(a || b)))return true;
return false;
}
bool THREE (int a, int b, int c){
if(!(a ^ b) || !(b ^ c))return true;
return false;
}
bool FOUR (int a, int b, int c){
if(!(!a || b ) || !c)return true;
return false;
}

int main(){
cout << "Question 1:" << endl;
for (int i =0; i < 2; i++){
    for (int j=0; j < 2; j++){
        for (int k=0; k<2; k++)
        {
            if (ONE(i,j,k)){
                cout << i << j <<k<<endl;
            }
            }
        }
    }
    cout << "Question 2: "<< endl;
    for (int i =0; i < 2; i++){
    for (int j=0; j < 2; j++){
        for (int k=0; k<2; k++)
        {
            if (TWO(i,j,k)){
                cout << i << j <<k<<endl;
            }
            }
        }
    }
    
    cout << "Question 3:"<< endl; 
    for (int i =0; i < 2; i++){
    for (int j=0; j < 2; j++){
        for (int k=0; k<2; k++)
        {
            if (THREE(i,j,k)){
                cout << i << j <<k<<endl;
            }
            }
        }
    }
    cout << "Question 4:" << endl;
    for (int i =0; i < 2; i++){
    for (int j=0; j < 2; j++){
        for (int k=0; k<2; k++)
        {
            if (FOUR(i,j,k)){
                cout << i << j <<k<<endl;
            }
            }
        }
    }
  
    return 0;
}
