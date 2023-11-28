#include <iostream>
#include <limits>

int main() {
        try {
        // Code that might throw an exception
        int numerator, denominator;
        
        std::cout << "Enter numerator: ";
        std::cin >> numerator;

        std::cout << "Enter denominator: ";
        std::cin >> denominator;
        
        if (std::cin.fail()) {
            // Handle the case where the user enters a non-numeric value
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input

            throw std::runtime_error("Error: Non-numeric value entered for denominator.");
        }
        if (denominator == 0) {
            // Throw an exception for division by zero
            throw std::runtime_error("Error ya ahbal: Division by zero is not allowed.");
        }

        // Perform the division
        double result = static_cast<double>(numerator) / denominator;

        // Display the result
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::exception& e) {
        // Catch and handle exceptions
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (...) {
        // Catch any other unexpected exceptions
        std::cerr << "An unexpected exception occurred." << std::endl;
    }
    return 0;
}