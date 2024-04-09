// Wen Fan
// CPSC 121L - 11
// April 15, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
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
  for (std::vector<double>::iterator it = weights.begin(); it != weights.end();
       it++) {
    std::cout << *it << " ";
  }

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
  std::map<std::string, double>::iterator map_it = populations.begin();
  while (map_it != populations.end()) {
    std::cout << "Population of " << abbrevs.at(map_it->first) << ": "
              << map_it->second << " million\n";
    map_it++;
  }

  std::cout << std::endl;
  // 3. Implement the constructors of the Plane class, in
  //    "plane.h". Refer to the README or the comments in
  //    "plane.h" for instructions.

  // =================== YOUR CODE HERE ===================
  // 4. Create an empty vector of Plane objects called `fleet`.
  // ======================================================
  std::vector<Plane> fleet;

  // =================== YOUR CODE HERE ===================
  // 5. Create a Plane `p1` instantiated with the default
  //       constructor. Add `p1` to the `fleet` vector.
  // ======================================================
  Plane p1;
  fleet.push_back(p1);

  // =================== YOUR CODE HERE ===================
  // 6. Use the constructor overload to create a Plane `p2`
  //       with 150 seats, 75 passengers, and destination
  //       "New York City". Add `p2` to the `fleet` vector.
  // ======================================================
  Plane p2(150, 75, "New York City");
  fleet.push_back(p2);

  // Uncomment these lines of code after completing #3-6.
  Plane p3(220, 220, "Atlanta");
  Plane p4(75, 75, "Guatemala City");
  Plane p5(125, 94, "Medellin");

  // =================== YOUR CODE HERE ===================
  // 7. Add `p3`, `p4`, and `p5` to the `fleet` vector.
  // ======================================================
  fleet.push_back(p3);
  fleet.push_back(p4);
  fleet.push_back(p5);

  // =================== YOUR CODE HERE ===================
  // 8. Using an iterator, print out all the flights in
  //    the `fleet` vector, only if the flights are full.
  //    Hint: see the README for the expected format.
  // ======================================================
  for (std::vector<Plane>::iterator fleet_it = fleet.begin();
       fleet_it != fleet.end(); fleet_it++) {
    if (fleet_it->GetSeatCount() == fleet_it->GetPassengerCount()) {
      std::cout << fleet_it->GetPassengerCount() << " passengers flying to "
                << fleet_it->GetDestination() << "\n";
    }
  }

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
