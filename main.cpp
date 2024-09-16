#include <iostream>
using namespace std;

int main() {
    int score;

    // Prompt the user for a score
    cout << "Enter the score: ";
    cin >> score;

    // Check if the score is a pass or fail
    if (score >= 50) {
        cout << "Pass\n";
    } else {
        cout << "Fail\n";
    }

    return 0;
}
