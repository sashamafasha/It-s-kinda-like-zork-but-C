#include <iostream>
#include <iomanip>
using namespace std;

void quickPlay() {
    cout << "Welcome To Quick Play" << endl;
    cout << "You are standing in front of a haunted mansion. Do you?" << endl;
    cout << "A. Enter Room" << endl;
    cout << "B. Look Around" << endl;
    string decisions;

    do
    {
        if (decisions == "")
        {
            cout << "Choose an option:" << endl;
        }
        else
        {
            cout << "Invalid option-- try again: ";
        }
        cin >> decisions;
    } while (decisions != "a");
    cout << "You have entered the room. Looking around the room there is a bed in the left hand corner with a bag on it." << endl;
}

int main() {
    cout << "Please choose one of them!" << endl;
    cout << "A. Quick Play" << endl;
    cout << "B. Full Game" << endl;
    cout << "C. Random" << endl;

    string choice;

    do
    {
        if (choice == "")
        {
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "Invalid option--try again: ";
        }
        cin >> choice;
    } while (choice != "a");
    cout << "" << endl;
    quickPlay();
   
    return 0;
}