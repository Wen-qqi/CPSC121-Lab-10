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
#include <string>

#ifndef PLANE_H
#define PLANE_H

class Plane {
 public:
  // ====================== YOUR CODE HERE ======================
  // Define the following constructors using member initializer
  //  list syntax:
  //
  //   1. A default constructor, which initializes seat count
  //      to 121, passenger count to 121, and the flight
  //      destination to "Fullerton".
  //   2. A constructor overload which accepts the seat count,
  //      passenger count, and flight destination and initializes
  //      each corresponding member variable appropriately.
  // ============================================================
  Plane()
      : seat_count_(121), passenger_count_(121), destination_("Fullerton") {}

  Plane(int seat_count, int passenger_count, std::string destination)
      : seat_count_(seat_count),
        passenger_count_(passenger_count),
        destination_(std::move(destination)) {}

  int GetPassengerCount() const {
    return passenger_count_;
  }
  void SetPassengerCount(int passengers) {
    passenger_count_ = passengers;
  }
  int GetSeatCount() const {
    return seat_count_;
  }
  void SetSeatCount(int seats) {
    seat_count_ = seats;
  }
  const std::string &GetDestination() const {
    return destination_;
  }
  void SetDestination(const std::string &dest) {
    destination_ = dest;
  }

 private:
  int seat_count_;
  int passenger_count_;
  std::string destination_;
};
#endif