#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int userIntegerInput;

    
    while (true) {
        
        cout << "Please enter an integer value between 5 and 10: ";
        
        
        if (cin >> userIntegerInput) {
            
            if (userIntegerInput >= 5 && userIntegerInput <= 10) {
                break;
            } else {
                cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
            }
        } else {
        
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer value." << endl;
        }
    }

    
    cout << "Your input value " << userIntegerInput << " has been accepted." << endl;

    return 0;
}
