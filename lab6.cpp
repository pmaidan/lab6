// Polina Maidanova
// Programming Fundamentals
// CS 1436
// 005
// Due Date: 09/23/2024
// Date completed: 09/22/2024
// Date submitted: 09/22/2024


// This program serves as the geometry calculator, calculating the area of different shapes.
#include <iostream> // Header file that allowes to work with input and output.
#include <cmath>    // Header file that allows to use mathematical functions.
#include <iomanip>  // Header file that allows to manipulate the output.
using namespace std;    // Use standard namespace.

int main()  // Main function, starting point of the program execution.
{
    int iMenuChoice;    // Declare the variable for the menu choice.
    double fArea, fRadius, fLength, fWidth, fBase, fHeight; // Declare the variables for the measurements of the shapes.

    // Display the menu.
    cout << "Geometry Calculator\n" << endl;
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n" << endl;

    // Request the user to choose an option from the menu and store it in the menu choice variable.
    cout << "Enter your choice (1-4): " << endl;
    cin >> iMenuChoice;

    // Perform the operation based on the user's menu choice.
    if (iMenuChoice == 1)   // Check if the user picked the first option.
    {
        cout << "Enter the radius of the circle: " << endl; // Request the radius of the circle.
        cin >> fRadius; // Store the radius of the circle in fRadius.

        if (fRadius < 0.0)  // Check if the user's input was negative.
        {
            cout << "Invalid input" << endl;    // Display the error message.
            return 1;   // Return 1 for the invalid input of the measurements of the circle error and terminate the program.
        }
        else    // If the input is valid, calculate the area.
        {
            fArea = M_PI * pow(fRadius, 2.0);   // Calculate the area of the circle, using the M_PI constant from cmath file.

            cout << "The area of the circle is: " << fArea << endl; // Display the area value.
        }
    }

    else if (iMenuChoice == 2)  // Check if the user picked the second option.
    {
        cout << "Enter the length and width of the rectangle: " << endl;    // Request the values for length and width from the user.
        cin >> fLength >> fWidth;   // Store the input in fLength and fWidth variables.

        if (fLength < 0.0 || fWidth < 0.0)  // Check if the user's input was negative.
        {
            cout << "Invalid input" << endl;    // Display the error message.
            return 2;   // Return 2 for the invalid input of the measurements of the rectangle error and terminate the program.
        }
        else    // If the input is valid, calculate the area.
        {
            fArea = fLength * fWidth;   // Calculate the area of the rectangle.

            cout << "The area of the rectangle is: " << fArea << endl;  // Display the area value.
        }
    }

    else if (iMenuChoice == 3)  // Check if the user picked the third option.
    {
        cout << "Enter the base and height of the triangle: " << endl; // Request the values for base and height from the user.
        cin >> fBase >> fHeight;

        if (fBase < 0.0 || fHeight < 0.0)  // Check if the user's input was negative.
        {
            cout << "Invalid input" << endl;    // Display the error message.
            return 3;   // Return 3 for the invalid input of the measurements of the triangle error and terminate the program.
        }
        else    // If the input is valid, calculate the area.
        {
            fArea = fBase * fHeight * 0.5;  // Calculate the area of the triangle.

            cout << "The area of the triangle is: " << fArea << endl;   // Display the area value.
        }
    }

    else if (iMenuChoice == 4)  // Check if the user picked the fourth option.
        return 4;   // Return 4 and terminate the program if the user chose to quit.
    else    // The input didn't match any of the menu choices.
    {
        cout << "Invalid menu choice. Enter a number 1-4." << endl; // Display the error message.
        return 5;   // Return 5 for the invalid input of the menu choice and terminate the program.
    }
    return 0;   // Return 0 to indicate successful completion of the program.
}
