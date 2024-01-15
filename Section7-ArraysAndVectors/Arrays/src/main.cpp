#include <iostream>

using namespace std;

int main()
{
    int vowels[]{'a', 'e', 'i', 'o', 'u'};

    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowels is: " << vowels[4] << endl;

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;
    cout << "\nThe first high temperature is now: " << hi_temps[0] << endl;

    int test_scores[5]{100, 95, 99, 87, 64};
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "Enter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\n Notice what the value of the array name is: " << test_scores << endl;
    cout << endl;

    return 0;
}