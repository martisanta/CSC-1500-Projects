#include <iostream>
#include <algorithm>
using namespace std;


void HammingCode(int n){
   int array[7];
   int arr2[10];
   int temp;
   int i;
   for(i =0; n > 0 ; i++ ){
    arr2[i] = n % 2;
    n /= 2; 
   }
   for(int i = 0; i < 10; i++){
       if (arr2[i] != 0 && arr2[i] != 1){
           arr2[i] = 0;
       }
   }
   array[2] = arr2[3];
   array[4] = arr2[2];
   array[5] = arr2[1];
   array[6] = arr2[0];
   int parity1; 
   int parity2; 
   int parity4; 
   parity1 = (array[2] + array[4] + array[6]) % 2;
   parity2 = (array[2] + array[5] + array[6]) % 2;
   parity4 = (array[4] + array[5] + array[6]) % 2;
   array[0] = parity1 % 2; 
   array[1] = parity2 % 2;
   array[3] = parity4 % 2;
   for(int i =0; i < 7; i++){
       cout << array[i] << " ";
   }
   cout << endl;
    
}

int main()
{
    cout << "First Problem:" << endl;
    cout << "Decimal number: 15" << endl;
    cout << "Hamming Code form: ";
    HammingCode(15);
    cout << endl;
    cout << "Second Problem: " << endl;
    cout << "Decimal number: 7" << endl;
    cout << "Hamming Code form: ";
    HammingCode(7);
    cout << endl;
    cout << "Third Problem: " << endl;
    cout << "Decimal number: 12" << endl;
    cout << "Hamming Code form: ";
    HammingCode(12);
    cout << endl;
    cout << "Fourth Problem: " << endl;
    cout << "Decimal number: 2" << endl;
    cout << "Hamming Code form: ";
    HammingCode(2);
    cout << endl;
    cout << "Fifth Problem: " << endl;
    cout << "Decimal number: 6" << endl;
    cout << "Hamming Code form: ";
    HammingCode(6);

    return 0;
}
