#include <iostream>
#include <iomanip>
using namespace std;

void fullStory() {
    char chapterone;
    cout << "Entering Full Story" << endl;
    cout << "[Chapter One]" << endl;
    cout << " You wake up fazed and slightly groggy on an island. You look to the left and you see a plane wreck" << endl;
    cout << "without an recollection of what happened. Looking up you see some smoke in the woods. Tooking right" << endl;
    cout << "you see more coastline. Where am I? Do I...:" << endl;
    cout << "[A.] Explore the wreck." << endl;
    cout << "[B.] Search beach." << endl;
    cout << "[C.] Walk towards woods." << endl;
    cin >> chapterone;
    if (chapterone == 'a')
    {
        char chapterTwo;
        cout << "You walk towards the wreck. You see what looks like someone underneath the wing. Do you..: " << endl;
        cout << "[A.] Go talk to the person." << endl;
        cout << "[B.] Look for supplies quietly." << endl;
        cout << "[C.] Go back" << endl;
        cin >> chapterTwo;
        if (chapterTwo == 'a')
        {
            char chapterTree;
            cout << "You walk towards the person. There's a little fire and you get there attention. Do you...:" << endl;
            cout << "[A.] Introduce yourself." << endl;
            cout << "[B.] Hide." << endl;
            cout << "[C.] Ask who are you?" << endl;

            cin >> chapterTree;
            if (chapterTree == 'a')
            {
                char chapterfour;
                string name;
                cout << "My name is...:" << endl;
                cin >> name;
                cout << "Hi "<< name << ". Nice to meet you I'm Listerinea. How can I help you?" << endl;
                cout << "[A.] Do you know where we are?" << endl;
                cout << "[B.] How did you get here?" << endl;
                cout << "[C.] Is there anyone else here?" << endl;
                cin >> chapterfour;
                if (chapterfour == 'a', 'b', 'c') 
                {
                    char introBag;
                    cout << "We crashed on to this island a few hours ago. Ive been sitting here hoping someone finds us." << endl;
                    cout << "I have no idea if anyone else is alive." << endl;
                    cout << "Do you...?" << endl;
                    cout << "[A.] Do you have any supplies?" << endl;
                    cout << "[B.] Do you want to search for anyone?" << endl;
                    cout << "[C.] Do you need help?" << endl;
                    if (introBag == 'a', 'b', 'c')
                    {
                        cout << "Yeah. *Listerinea tosses you a bag?" << endl;
                        cout << "You check inside the bag and see:" << endl;
                        cout << "[1. Health pack +50 HP.]" << endl;
                        cout << "[2. Compass]" << endl;
                        cout << "[3. Granola Bar +6 Hunger]" << endl;
                    }
                    

                }
                else if (chapterfour == 'd') {
                    cout << "welcome" << endl;
                }
              
                 
            
            }
            else if (chapterTree == 'b')
            {
                cout << "You spring towards the plane door to hide inside" << endl;

            }
            else if (chapterTree == 'c')
            {
                cout << "Who are you?" << endl;
            }
        }
        else if (chapterone == 'b')
        {
            cout << "You sneak over to the plan door and look inside...";
        }
        else if (chapterTwo == 'c')
        {
            cout << "Exiting Program" << endl;
        }
    }
    else if (chapterone == 'b')
    {
        cout << "You walk down the beach towards the sunsetting." << endl;
    }
    else if (chapterone == 'c')
    {
        cout << "You walk towards the woods and you see a small light." << endl;
    }
}

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

    char choice;
    cout << "Choose an option: " << endl;
    cout << "[A] Quick Play" << endl;
    cout << "[B] Full Story" << endl;
    cout << "[C] Quit" << endl;
    cin >> choice;
    if (choice == 'a')
    {
        quickPlay();
    }
    else if (choice == 'b')
    {
        fullStory();
    }
    else if (choice == 'c')
    {
        cout << "Exiting Program" << endl;
    }
    

    return 0;
}
