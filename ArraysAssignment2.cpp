#include <iostream>
using namespace std;

// Function prototype
int countPerfect(const int scores[], int size);

int main() {
    int scores[20];
    int count = 0;
    int input;

    cout << "Enter up to 20 scores (0-100). Enter -1 to stop:\n";

    do {
        cin >> input;
        if (input == -1)
        {
            break;
        }
        else if (input < -1 || input > 100)
        {
            cout << "Error; invalid input." << endl;
            cout << "Please enter again." << endl;
        }
        else
        {
            scores[count] = input;
            count++;
        }
    } while (count < 20);
    
    int perfectOnes = countPerfect(scores, count);
    
    cout << "\nYou entered " << count << " scores." << endl;
    cout << "Perfect scores (100): " << perfectOnes << endl;

    return 0;
}

// Value-returning function to count scores of 100
int countPerfect(const int scores[], int size) {
    int totalPerfect = 0;

    for (int index = 0; index < size; index++)
    {
        int temp = scores[index];
        if (temp == 100)
        totalPerfect++;
    }
    
    return totalPerfect;
}
