/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int arraysorter(int* arr){
    int x =0;
    for (int j =0; j < 10; j++){
    for (int i = 1; i < 10-j ; i++){
        x += 1;
        if(arr[i-1] > arr[i]){
            int t; 
            t = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = t;
            x += 3;
        }
    }
    }
    cout << x << " Actions performed!";
    return *arr;
}
int main()
{
    cout << "First list to sort" << endl;
    int arr[] = {1, 3, 7, 5, 2, 4, 6, 8, 9, 10};
    arraysorter(arr);
    cout << "Sorted List: ";
    for (int i =0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Second list to sort" << endl;
    int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    arraysorter(arr2);
    cout << "Sorted List: ";
    for (int i =0; i < 10; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Third list to sort" << endl;
    int arr3[] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
    arraysorter(arr3);
    cout << "Sorted List: ";
    for (int i =0; i < 10; i++){
        cout << arr3[i] << " ";
    }
        return 0;
    }


