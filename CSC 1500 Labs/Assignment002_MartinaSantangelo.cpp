#include <iostream>
using namespace std;

bool ONE (int a, int b, int c){
//if((a && b) || (a && c))return true;
if(( a ==1 && b ==1 ) || (a == 1 && c == 1))return true;
return false;
}
bool TWO (int a, int b, int c){
if(( a ==1 && c ==1 ) && (b == 1 && !(c == 1)))return true;
return false;
}
bool THREE (int a, int b, int c){
if(( a ==1 || b ==1 ) && !(b == 1 || c == 1))return true;
return false;
}
bool FOUR (int a, int b, int c){
if(( a ==1 || (b ==1 && c == 1)) && (!(a == 1) && !(b == 1)))return true;
return false;
}
bool FIVE (int a, int b, int c){
if((( b ==1 && c ==1 ) || (c == 1 && a == 1)) && (!(a ==1 || b ==1) && c ==1))return true;
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
    cout << "Question 5:" << endl;
    for (int i =0; i < 2; i++){
    for (int j=0; j < 2; j++){
        for (int k=0; k<2; k++)
        {
            if (FIVE(i,j,k)){
                cout << i << j <<k<<endl;
            }
            }
        }
    }
    return 0;
}