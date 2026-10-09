#include <iostream>
using namespace std;

void printNumbers() {

    int count = 0;

    // while loop runs while the condition is true
    while (count < 5) {
        cout << count << endl;
        count++;
    }
}

int main() {

    // Calling the function
    printNumbers();

    return 0;
}