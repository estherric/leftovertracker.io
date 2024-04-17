// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric

#include "leftover_record.h"

#include <iostream>
// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_record.h), only
// if you didn't implement them inline within leftover_record.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftLeftoverRecord
// class.
// ===================================================================
// Date
std::string& LeftoverRecord::GetDate() const { return date_; }
void LeftoverRecord::SetDate(const std::string& date) { date_ = date; }

// Meal
std::string& LeftoverRecord::GetMeal() const { return meal_; }
void LeftoverRecord::SetMeal(const std::string& meal) { meal_ = meal; }

// Food Name
std::string& LeftoverRecord::GetFoodName() const { return food_name_; }
void LeftoverRecord::SetFoodName(std::string& food_name) {
  food_name_ = food_name;
}

// Quantity in Oz
double LeftoverRecord::GetQuantityOz() { return qty_in_oz_; }
void LeftoverRecord::SetQuantityOz(double qty_in_oz) { qty_in_oz_ = qty_in_oz; }

// Leftover Reason
std::string& LeftoverRecord::GetLeftoverReason() const {
  return leftover_reason_;
}
void LeftoverRecord::SetLeftoverReason(std::string& leftover_reason) {
  leftover_reason_ = leftover_reason;
}

// Disposal Mechanism
std::string& LeftoverRecord::GetDisposalMechanism() const {
  return disposal_mechanism_;
}
void LeftoverRecord::SetDisposalMechanism(std::string& disposal_mechanism) {
  disposal_mechanism_ = disposal_mechanism;
}

// Cost
double LeftoverRecord::GetCost() { return cost_; }
void LeftoverRecord::SetCost(double cost) { cost_ = cost; }