#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric
#include <string>
#include <vector>

#include "leftover_record.h"

class LeftoverReport {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  // Default Constructor
  LeftoverReport() : records() {}
  // Non-default Constructor
  LeftoverReport(const std::vector<LeftoverRecord>& user_records)
      : records(user_records) {}

  // Most Common Leftovers
  std::vector<std::string> MostCommonLeftovers() const;

  // Most Costly Meals
  std::vector<std::string> MostCostlyMeals() const;

  // Total Cost of Leftovers
  double TotalCostOfLeftovers() const;

  // Most Common Reasons of Leftovers
  std::vector<std::string> MostCommonReasons() const;

  // Most Common Disposal Mechanism
  std::vector<std::string> MostCommonDisposalMechanisms() const;

  // Suggested Strategies To Reduce Leftovers
  std::vector<std::string> SuggestedStrategies() const;

  // = Operator Overload
  LeftoverReport& operator=(const std::vector<std::string>& other);

 private:
  std::vector<LeftoverRecord> records;
};

#endif
