#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.\n";

    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    int r = rand() % 9;

    cout << "\nYou will get " << grades[r] << " in this 261102.";

    return 0;
}
