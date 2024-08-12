//Header Guard: this is a header guard that prevents the header file from begin included more than once in the same file during compilation. It insures that the compiler processed the file only once, avoiding redefinition errors.
#ifndef BUS_H
#define BUS_H

//Includes: inlcudes the standard library of string class and vector class, allowing the use of std::string for manipulating strings, std::vector for dynamic arrays.
#include <string>
#include <vector>

//Defining a new class named 'Bus'
class Bus {
public:
    std::string yatayat; //string varibale for bus service provider ko naam
    std::string start_point; //string variable for bus ko starting point
    std::string end_point; //string variable for bus ko ending point
    std::vector<std::string> intermediate_destinations; //a vector of strings, bich ma parne thau haru ko naam store garna, vector le chai hamilai dynamic array declare garna help garxa

    // Constructor: to initialize a Bus obj with specific values.
    Bus(const std::string& yat, const std::string& start, const std::string& end, const std::vector<std::string>& routes);

    // Method to display bus information
    void displayInfo() const; //const makes sure that this method doesnot change any member variables of the class, because hamilai ta only display garnu xa data not modify it
};

//Ends the header guard, ensuring that everything between #indef BUS_H, and #endif chai ek patak matra include hunxa file haru ma.
#endif // BUS_H
