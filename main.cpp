//
//  main.cpp
//  Assignment_7
//
//  Created by Noah Honickman on 12/26/20.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct pizza {
    string name;
    double diameter;
    double weight;
};

int main() {
    pizza first = {};
    cout << "Enter a name, diameter and weight for a pizza. \n";
    cout << "Enter the name: ";
    cin >> first.name;
    cout << "\n";
    cout << "Enter a diameter: ";
    cin >> first.diameter;
    cout << "\n";
    cout << "Enter a weight: ";
    cin >> first.weight;
    
    cout << "The name of the pizza is: " << first.name;
    cout << "\n";
    cout << "The diameter is: " << first.diameter;
    cout << "\n";
    cout << "The weight is " << first.weight << "\n";
    
    
    
    return 0;
}
