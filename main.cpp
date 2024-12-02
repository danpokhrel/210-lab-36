// COMSC-210 | Lab 36 | Dan Pokhrel
#include <iostream>
#include <fstream>
#include <string>
#include "StrBinaryTree.h"
using namespace std;

// Prototypes
void addNode(StrBinaryTree &tree);
void deleteNode(StrBinaryTree &tree);
void searchNode(StrBinaryTree &tree);
void modifyNode(StrBinaryTree &tree);

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
            addNode(tree);
            break;
        case 2:
            deleteNode(tree);
            break;
        case 3:
            searchNode(tree);
            break;
        case 4:
            modifyNode(tree);
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

void addNode(StrBinaryTree &tree)
{
    cout << "\nCode: ";
    string x; cin >> x;

    tree.insertNode(x);
    cout << "Added " << x << " to tree.\n\n";
}

void deleteNode(StrBinaryTree &tree)
{
    cout << "\nCode: ";
    string x; cin >> x;

    tree.remove(x);
    cout << "Removed " << x << " from tree.\n\n";
}

void searchNode(StrBinaryTree &tree)
{
    cout << "\nCode to modify: ";
    string x; cin >> x;

    bool s = tree.searchNode(x);
    cout << x;
    if (s) cout << " found "; else cout << " not found";
    cout << " in tree.\n\n";
}

void modifyNode(StrBinaryTree &tree)
{
    cout << "\nCode to modify: ";
    string x; cin >> x;

    bool s = tree.searchNode(x);
    if (!s){
        cout << "Error: node not found\n\n";
        return;
    }

    cout << "New code: "; cin >> x;
    
}
