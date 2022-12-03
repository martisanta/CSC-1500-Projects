/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
bool ONE (bool i , bool j){
if( !i || j )return true;
return false;
}
bool TWO (bool j , bool k){
if( !j || k )return true;
return false;
}
bool THREE (bool k, bool l){
if(!k || l)return true;
return false;
}
bool conc (bool l, bool i){
if(!l || i )return true;
return false;
}
void output(bool i, bool j, bool k, bool l){
    if (i == true){
                    cout << " Someone has a rocket,";
                }
                else{
                    cout << " Someone doesn't have a rocket,";
                }
                if (j == true){
                    cout << " Someone is an astronaut,";
                }
                else{
                    cout << " Someone is not an astronaut,";
                }
                if (k == true){
                    cout << " Someone is highly trained,";
                }
                else{
                    cout << " Someone is not highly trained,";
                }
                if (l == true){
                    cout << " Someone is educated!";
                }
                else{
                    cout << " Someone isnt educated!";
                }
                cout << "" << endl;
}
int main()
{
   for (int i =0; i < 2; i++){
    for (int j=0; j < 2; j++){
        for (int k=0; k<2; k++){
            for (int l =0; l < 2; l++){
            if (ONE(i,j) && TWO(j,k) && THREE(k,l) && !(conc(l,i))){
                if (i && j && k && l){
                    cout << "valid:";
                }
                else{
                    cout << "invalid:";
                }
                output(i,j,k,l);
            }
            }
            }
            }


    return 0;
}
}
