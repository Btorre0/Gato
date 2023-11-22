#include<iostream>
using namespace std;

int main() {
    // rows and collonm numbers
    int space[3][3]={{00,01,02}, {10,11,12}, {20,21,22}};

    string player1;
    string player2;

    cout << "Enter player 1: ";
    getline(cin, player1);
    cout << endl;

    cout << "Enter player 2: ";
    getline(cin, player2);
    cout << endl;

    cout << player1 << " will play first and "
         << player2 << " will play second.";

    // structure of the structure
   
}