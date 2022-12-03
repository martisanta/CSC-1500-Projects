#include <iostream>
#include <array>

using namespace std;

void Parity(int array[]){
    int parity1; 
    int parity2; 
    int parity4;
    int sum = 0;
    int decimal = 0;
    parity1 = (array[0] + array[2] + array[4] + array[6]) % 2;
    parity2 = (array[1] + array[2] + array[5] + array[6]) % 2; 
    parity4 = (array[3] + array[4] + array[5] + array[6]) % 2;
    if (parity1 % 2 != 0){
        sum += (parity1 % 2);
    }
    if (parity2 % 2 != 0){
        sum += (parity2 % 2) * 2;
    }
    if (parity4 % 2 != 0){
        sum += (parity4 % 2) * 4;
    }
    if(sum != 0){
        cout << "Incorrect Bit at location " << sum << endl;
        array[sum - 1] = 0; 
        cout << "The correct Bit should be ";
        for(int i =0; i < 7; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
    else if(sum == 0){
        cout << "All correct! The bit is ";
        for(int i =0; i < 7; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
    if (array[2] == 1){
        decimal = (array[2] * 8); 
    }
    if (array[4] == 1){
        decimal += (array[4] * 4);
    }
    if (array[5] == 1){
        decimal += (array[5] * 2);
    }
    if (array[6] == 1){
        decimal += (array[6] * 1);
    }
    cout << "Decimal version of the bit: " << decimal << endl;
}

int main()
{
    int array1[] = {1,1,0,1,0,1,0};
    cout << endl;
    int array2[] = {0,0,1,0,1,1,1};
    cout << endl;
    int array3[] = {1,0,1,0,1,0,1};
    cout << endl;
    int array4[] = {1,0,0,1,0,0,1};
    cout << endl;
    int array5[] = {0,1,1,0,0,1,1};
    
    cout << "First Problem" << endl;
    Parity(array1);
    cout << endl;
    cout << "Second Problem" << endl;
    Parity(array2);
    cout << endl;
    cout << "Third Problem" << endl;
    Parity(array3);
    cout << endl;
    cout << "Fourth Problem" << endl;
    Parity(array4);
    cout << endl;
    cout << "Fifth Problem" << endl;
    Parity(array5);

    return 0;
}


