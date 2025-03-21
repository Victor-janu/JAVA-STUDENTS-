#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Select your gender:\n";
    cout << "1. Male\n";
    cout << "2. Female\n";
    cout << "3. Other\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected: Male\n";
            break;
        case 2:
            cout << "You selected: Female\n";
            break;
        case 3:
            cout << "You selected: Other\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 3.\n";
    }

    return 0;
}