#include <string>
#include <iostream>
using namespace std;

// Set the Harris-Benedict constants
const double MALE_CONSTANT = 88.36;
const double FEMALE_CONSTANT = 447.6;
const double HEIGHT_CONSTANT = 4.7;
const double WEIGHT_CONSTANT = 13.7;
const double AGE_CONSTANT = 5.0;

int main() {
    // Declare variables for the user's information
    char gender;
    int age;
    double height, weight, activity_level;

    // Ask for the user's information
    cout << "Enter your gender (M or F): ";
    cin >> gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height in cm: ";
    cin >> height;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    cout << "Enter your activity level (1.2 for sedentary, 1.375 for light activity, 1.55 for moderate activity, 1.725 for very active, or 1.9 for extra active): ";
    cin >> activity_level;

    // Calculate the maintenance calories based on the user's information
    double maintenance_calories;
    if (gender == 'M') {
        maintenance_calories = (MALE_CONSTANT + (WEIGHT_CONSTANT * weight) + (HEIGHT_CONSTANT * height) - (AGE_CONSTANT * age)) * activity_level;
    } else {
        maintenance_calories = (FEMALE_CONSTANT + (WEIGHT_CONSTANT * weight) + (HEIGHT_CONSTANT * height) - (AGE_CONSTANT * age)) * activity_level;
    }

    // Print the calculated maintenance calories
    cout << "Your maintenance calories are: " << maintenance_calories << endl;

    return 0;
}
