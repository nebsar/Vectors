/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on August 29, 2018, 11:00 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */

void printVector(vector<int>& v) {
    for (unsigned int i = 0; i < v.size(); i++) {
        cout << i << " - " << v[i] << endl;
    }
}

void addElementToVector(vector<int>& v) {
    cout << "Please Enter The Elements of the Vector" << endl;
    cout << "In Order to Exit please Type '-1' " << endl;
    cout << "Enter Element : ";
    int element = 0;

    cin>>element;

    while (element != -1) {
        v.push_back(element);
        cout << "Enter Element : ";
        cin>>element;
    }

}

void replaceNumber(vector<int>& v) {

    int old, replacement;

    cout << "Please enter a number to be changed and enter a new number : ";
    cin >> old>>replacement;

    for (unsigned int i = 0; i < v.size(); i++) {
        if (v[i] == old) {
            v[i] = replacement;
        }

        printVector(v);

    }

}

int main() {

//    vector<int> myVector;
//
//    addElementToVector(myVector);
//
//    printVector(myVector);
//
//    cout << myVector.at(5) << endl;
//
//    myVector.erase(myVector.begin() + 5);
//
//    myVector.insert(myVector.begin() + 4, 45000);
//
//    printVector(myVector);
//
//    replaceNumber(myVector);
//
//    myVector.clear();
//
//    cout << boolalpha << (myVector.empty() ? true : false) << endl;
    
   
   char deneme[7] = "deneme";
   
    char* argv = deneme;
    
    
    
    
    char** argvptr;
    
    
    
    //char* first = "deneme";
    
    
    
    

	std::cout << "3-----------:    " << argv << std::endl;

    return 0;
}

