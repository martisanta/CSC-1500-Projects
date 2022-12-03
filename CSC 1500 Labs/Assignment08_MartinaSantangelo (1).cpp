
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cipher;
    cout<<"Enter Cipher: ";
    //cin >> cipher;
    cipher = "Wkh qljkw lv orqj dqg zh doo suhwhqg wr vohhs";
    int shift; 
    for(shift = 0; shift <= 26; shift++){
        string newstring = "";
        
    for(int i =0; i < cipher.length(); i++){
        
        if(isupper(cipher[i])){
            newstring += char(int(cipher[i] +shift - 65)%26 + 65);
        }
        else if (islower(cipher[i])){
            newstring += char(int(cipher[i] +shift - 97)%26 + 97);
    }
        else{
            newstring += cipher[i];
        }
    }
    cout << newstring << endl;
}
    return 0;
}