#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char answer; 
    char play;
    int index;
    string AIanswer;
    vector <char> AI = {'r', 'p', 's','r', 'p', 's','r', 'p', 's'};
    do{
    cout << "Rock...Paper...Scissors...Shoot!(input r, s or p) ";
    cin >> answer;
    switch (answer){
        case 'r':
        AI.pop_back();
        AI.insert(AI.begin(), 'p');
        break;
        case 'p':
        AI.pop_back();
        AI.insert(AI.begin(), 's');
        break;
        case 's':
        AI.pop_back();
        AI.insert(AI.begin(), 'r');
        break;
    }
    index = rand() % 9 + 0;
    switch(AI[index]){
        case 'r':
        AIanswer = "Rock!";
        break;
        case 'p':
        AIanswer = "Paper!";
        break;
        case 's':
        AIanswer = "Scissors!";
        break;
    }
    cout << "The AI played " << AIanswer << endl;
    /*cout << "AI array: ";
    for(int i =0; i < AI.size(); i++){
        cout << AI[i];
    }
    cout << endl;*/
    if (answer == 'r' && AIanswer == "Paper!"){
        cout << "AI wins, nice try human." << endl;
    }
    if (answer == 'p' && AIanswer == "Scissors!"){
        cout << "AI wins, nice try human." << endl;
    }
    if (answer == 's' && AIanswer == "Rock!"){
        cout << "AI wins, nice try human." << endl;
    }
    if (answer == 'p' && AIanswer == "Rock!"){
        cout << "You win this time, human." << endl;
    }
    if (answer == 's' && AIanswer == "Paper!"){
        cout << "You win this time, human." << endl;
    }
    if (answer == 'r' && AIanswer == "Scissors!"){
        cout << "You win this time, human." << endl;
    }
    else if (answer == AI[index]){
        cout << "Tie..." << endl;
    }
    cout << "Play again? (y/n). I will always beat you anyway. ";
    cin >> play;
    }
    while(play != 'n');
 

    return 0;
}

