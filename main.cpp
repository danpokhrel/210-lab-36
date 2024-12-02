// COMSC-210 | Lab 36 | Dan Pokhrel
#include <iostream>
#include <fstream>
#include <string>
#include "StrBinaryTree.h"
using namespace std;

int main() {
    StrBinaryTree tree;

    ifstream fin("codes.txt");
    while(fin.good()){
        string x; getline(fin, x);
        // Populate tree
        tree.insertNode(x);
    }

    int choice = 0;
    while (choice != 5){
        cout << "------BST Menu------\n";
        cout << "1. Add Node\n";
        cout << "2. Delete Node\n";
        cout << "3. Search Node\n";
        cout << "4. Modify Node\n";
        cout << "5. Quit\n";
        cout << "Choice (1-5):";
        cin >> choice;

        switch (choice)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            break;
        
        default:
            cout << "\nInvalid Input\n";
            break;
        }

        cout << endl;
    }

    return 0;
}