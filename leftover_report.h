#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric
#include <vector>
#include <string>

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
  // Leftover Report
  LeftoverReport(const std::vector<LeftoverRecord>& leftover_records);

  // Most Common Leftovers
  const std::vector<std::string> GetMostCommonLeftovers() const;

  // Most Costly Meals
  const std::vector<std::string> GetMostCostlyMeals() const;

  // Total Cost of Leftovers
  double GetTotalCostOfLeftovers() const;

  // Most Common Reasons of Leftovers
  const std::vector<std::string> GetMostCommonReasons() const;

  // Most Common Disposal Mechanism
  std::vector<std::string> GetMostCommonDisposalMechanisms() const;

  // Suggested Strategies To Reduce Leftovers
  std::vector<std::string> GetSuggestedStrategies() const;

 private:
  const std::vector<LeftoverRecord>& leftover_records_;
  std::vector<std::string> most_common_leftovers_;
  std::vector<std::string> most_costly_meals_;
  double total_cost_of_leftovers_;
  std::vector<std::string> most_common_reasons_;
  std::vector<std::string> most_common_disposal_mechanisms_;
  std::vector<std::string> suggested_strategies_;
};

#endif
