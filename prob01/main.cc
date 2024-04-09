// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 10-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <map>
#include <vector>

#include "plane.h"

int main() {
  std::vector<double> weights{3.2, 4.7, 2.1, 5.5, 9.8, 7.4, 1.6, 9.3};
  std::cout << "Printing out all the weights: " << std::endl;
  // =================== YOUR CODE HERE ===================
  // 1. Using an iterator, print out all the elements in
  //    the weights vector on one line, separated by spaces.
  //    Hint: see the README for the for loop syntax using
  //    an iterator, .begin(), and .end()
  // =======================================================

  std::cout << std::endl;
  std::map<std::string, std::string> abbrevs{{"AL", "Alabama"},
                                             {"CA", "California"},
                                             {"GA", "Georgia"},
                                             {"TX", "Texas"}};
  std::map<std::string, double> populations{
      {"CA", 39.2}, {"GA", 10.8}, {"AL", 5.1}, {"TX", 29.5}};
  std::cout << "\nPrinting out the state populations: " << std::endl;
  // =================== YOUR CODE HERE ===================
  // 2. Using an iterator, print out each state's population
  //    on a new line, in the format:
  //      "Population of Alabama: 5.1 million"
  //      "Population of California: 39.2 million"
  //      ... and so on
  //
  //    * abbrevs maps from the state abbreviation to the
  //      full state name.
  //    * populations maps from the state abbreviation to
  //      to the population (in millions)
  //    Use the abbrevs map to retrieve the full state name
  //    to print out, while iterating over the populations
  //    map.
  // ======================================================

  std::cout << std::endl;
  // 3. Implement the constructors of the Plane class, in
  //    "plane.h". Refer to the README or the comments in
  //    "plane.h" for instructions.

  // =================== YOUR CODE HERE ===================
  // 4. Create an empty vector of Plane objects called `fleet`.
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 5. Create a Plane `p1` instantiated with the default
  //       constructor. Add `p1` to the `fleet` vector.
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 6. Use the constructor overload to create a Plane `p2`
  //       with 150 seats, 75 passengers, and destination
  //       "New York City". Add `p2` to the `fleet` vector.
  // ======================================================

  // Uncomment these lines of code after completing #3-6.
  // Plane p3(220, 220, "Atlanta");
  // Plane p4(75, 75, "Guatemala City");
  // Plane p5(125, 94, "Medellin");

  // =================== YOUR CODE HERE ===================
  // 7. Add `p3`, `p4`, and `p5` to the `fleet` vector.
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 8. Using an iterator, print out all the flights in
  //    the `fleet` vector, only if the flights are full.
  //    Hint: see the README for the expected format.
  // ======================================================

  // =================== Optional Bonus ===================
  // For an extra challenge, try to replicate the iterator
  // loop in #1 but with a reverse iterator to print out
  // all the elements in the `weights` vector in reverse.
  //
  // Hint: use the std::vector<double>::reverse_iterator
  //       and .rbegin() and .rend() instead. rbegin()
  //       points to the last element in the vector, and
  //       using ++ to increment moves the iterator towards
  //       the beginning of the vector.
  // ======================================================
}
