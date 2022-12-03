#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


void print(std::vector<int> const &input){
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}
vector <int> intersect(vector <int> a, vector <int> b){
    vector <int> intersect; 
    if (a.size() < b.size()){
          sort(a.begin(), a.end());
         for(int i =0; i < b.size(); i++){
            if(binary_search(a.begin(), a.end(),b[i])){
                intersect.push_back(b[i]);
            }
            else{
                continue;
            }
         }
    }
    else if (b.size() < a.size()){
          sort(b.begin(), b.end());
         for(int i =0; i < a.size(); i++){
            if(binary_search(b.begin(), b.end(),a[i])){
                intersect.push_back(a[i]);
            }
            else{
                continue;
            }
         }
    }
    else{
         sort(b.begin(), b.end());
         for(int i =0; i < a.size(); i++){
            if(binary_search(b.begin(), b.end(),a[i])){
                intersect.push_back(a[i]);
            }
            else{
                continue;
            }
         }
    }
 
    return intersect;
}
vector <int> Union(vector <int> a, vector <int> b){
    vector <int> temparray;
    vector <int> c;
    c = intersect(a,b);
    for(int i =0; i < a.size(); i++){
        temparray.push_back(a[i]);
    }
    for(int i =0; i < b.size(); i++){
        if(binary_search(c.begin(), c.end(), b[i])){
            continue;
        }
        else{
            temparray.push_back(b[i]);
        }
    }
    sort(temparray.begin(), temparray.end());
  
    return temparray;
}
vector <int> removal(vector <int> a, vector <int> b){
    vector <int> temparray;
    vector <int> c;
    c = intersect(a,b);
    for(int i = 0; i < a.size(); i++){
        if (binary_search(c.begin(), c.end(),a[i])) {
            continue;
        }
        else{
            temparray.push_back(a[i]);
        }
    }
    for(int i = 0; i < b.size(); i++){
        if (binary_search(c.begin(), c.end(),b[i])) {
            continue;
        }
        else{
            temparray.push_back(b[i]);
        }
    }
    
    return temparray;
}

vector <int> inverse(vector <int> a){
    vector <int> temparray;
    vector <int> standard = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for ( int i=0; i < standard.size(); i++){
        if(binary_search(a.begin(), a.end(), standard[i])){
            continue;
        }
        else{
            temparray.push_back(standard[i]);
        }
    }

    return temparray;
}
int main()
{
    vector <int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector <int> B= {2, 4,  6, 8, 10};
    vector <int> C= {1, 3, 5, 7, 9};
    vector <int> D= {1, 2, 3, 5, 7};
    cout << "Problem 1: ";
    print(intersect(A,D));
    cout << endl;
    cout << "Problem 2: ";
    print(intersect((Union(B,C)), A));
    cout << endl;
    cout << "Problem 3: ";
    print(intersect(Union(inverse(C), C),A));
    cout << endl;
    cout << "Problem 4: "; 
    print(removal(A,D));
    cout << endl;
    cout << "Problem 5: ";
    cout << Union(inverse(A),Union(C,D)).size();
    cout << endl;
    cout << "Problem 6: ";
    print(intersect(D, C));
    cout << endl;
    cout << "Problem 7: ";
    cout << intersect(B,C).size();
    cout << endl;
    cout << "Problem 8: ";
    print(Union(Union(Union(A,B),C), D));
    
    return 0;
}