#include <iostream>
using namespace std;

int main() {
    int hours;

    cout << "Enter hours studied today: ";
    cin >> hours;

    if (hours == 0) {
        cout << "Start today! Even 30 minutes can make a difference.";
    }
    else if (hours <= 2) {
        cout << "Good start! Keep studying and stay focused.";
    }
    else if (hours <= 5) {
        cout << "Great job! You are making solid progress.";
    }
    else {
        cout << "Excellent work! Keep up the dedication.";
    }

    return 0;
}
