// Chap 5 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;

int main()
{
    int size;
    cout << "Please enter the number of students." << endl;
    cin >> size;
    vector<string> names(size);
    for (int index = 0; index < size; ++index) {
        cout << "Enter name " << index + 1 << ": " << endl;
        cin >> names[index];
    }
    sort(names.begin(), names.end());
    cout << "Line positioning:" << endl;
    for (int index = 0; index < size; ++index) {
        cout << names[index] << endl;
    }
    return 0;
}
