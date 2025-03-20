#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "Select your gender:\n";
    cout << "1. Male\n2. Female\n3. Other\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    if (choice == 1)
        cout << "You selected Male.\n";
    else if (choice == 2)
        cout << "You selected Female.\n";
    else if (choice == 3)
        cout << "You selected Other.\n";
    else
        cout << "Invalid choice.\n";

    return 0;
} 