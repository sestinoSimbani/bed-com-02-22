#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string exercise3Array[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    
    for (int i = 0; i < 8; ++i) {
        if (exercise3Array[i][0] == 'B') {
            cout << exercise3Array[i] << endl;
        }
    }
    return 0;
}