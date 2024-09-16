#include <iostream>
using namespace std;

int main() {
    int score;
    char another;

    do{
    // Prompt the user for a score
    cout << "Enter the score: ";
    cin >> score;

    // Check if the score is a pass or fail
    if (score >= 50) {
        cout << "Pass\n";
    } else {
        cout << "Fail\n";
    }

    cout<<"y/n repeat";
    cin>>another;

    }

    while(another == 'y' || another == 'Y' );
           

    return 0;
}
