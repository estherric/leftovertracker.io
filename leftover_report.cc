// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric

#include "leftover_report.h"

#include <iostream>
// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_report.h), only
// if you didn't implement them inline within leftover_report.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverReport
// class.
// ===================================================================
// Leftover Report
LeftoverReport::LeftoverReport(const std::vector<LeftoverRecord>& leftover_records)
    : leftover_records_(leftover_records) {}

// Most Common Leftovers
const std::vector<std::string> LeftoverReport::GetMostCommonLeftovers() const {
  return most_common_leftovers_;
}

// Most Costly Meals
const std::vector<std::string> LeftoverReport::GetMostCostlyMeals() const {
  return most_costly_meals_;
}

// Total Cost of Leftovers
double LeftoverReport::GetTotalCostOfLeftovers()
    const {
  return total_cost_of_leftovers_;
}

// Most Common Reasons of Leftovers
const std::vector<std::string> LeftoverReport::GetMostCommonReasons() const {
  return most_common_reasons_;
}
// Most Common Disposal Mechanism
std::vector<std::string> LeftoverReport::GetMostCommonDisposalMechanisms() const {
  return most_common_disposal_mechanisms_;
}

// Suggested Strategies To Reduce Leftovers
std::vector<std::string> LeftoverReport::GetSuggestedStrategies() const {
  return suggested_strategies_;
}
