// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric

#include "leftover_report.h"

#include <algorithm>
#include <iostream>
#include <map>

#include "leftover_record.h"
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

// Most Common Leftovers
std::vector<std::string> LeftoverReport::MostCommonLeftovers() const {
  std::vector<std::string> most_common_leftovers;

  // Map to store food items and their counts
  std::map<std::string, int> count_map;
  // Iterate through all leftover records to count occurrences of each food item
  for (const LeftoverRecord& record : records) {
    // Increment the count for the food item
    count_map[record.GetFoodName()]++;
  }

  // Find the maximum count
  int max_count = 0;
  for (const auto& pair : count_map) {
    max_count = std::max(max_count, pair.second);
  }

  // Collect food names
  for (const auto& pair : count_map) {
    if (pair.second == max_count) {
      most_common_leftovers.push_back(pair.first);
    }
  }

  return most_common_leftovers;
}

// Most Costly Meals
std::vector<std::string> LeftoverReport::MostCostlyMeals() const {
  // Map to store total cost of leftovers for each meal type
  std::map<std::string, double> cost_map;

  // Iterate through all leftover records to calculate total cost for each meal
  // type
  for (const LeftoverRecord& meal : records) {
    // Increment the total cost for the meal type
    cost_map[meal.GetMeal()]++;
  }

  // Vector to store meal types that produced the most costly leftovers
  std::vector<std::string> most_costly_meals;
  // Find the maximum total cost
  double max_cost = 0.0;
  for (const auto& pair : cost_map) {
    if (pair.second > max_cost) {
      max_cost = pair.second;
    }
  }

  for (const auto& pair : cost_map) {
    if (pair.second == max_cost) {
      most_costly_meals.push_back(pair.first);
    }
  }

  return most_costly_meals;
}

// Total Cost of Leftovers
double LeftoverReport::TotalCostOfLeftovers() const {
  double total_cost = 0.0;

  // Iterate through all leftover records to calculate the total cost
  for (const LeftoverRecord& record : records) {
    // Accumulate the cost of each leftover
    total_cost += record.GetCost();
  }

  return total_cost;
}

// Most Common Reasons of Leftovers
std::vector<std::string> LeftoverReport::MostCommonReasons() const {
  std::vector<std::string> most_common_leftover_reasons;
  // Map to store reasons for leftovers and their counts
  std::map<std::string, int> count_map;

  // Iterate through all leftover records to count occurrences of each reason
  for (const LeftoverRecord& record : records) {
    // Increment the count for the reason
    count_map[record.GetLeftoverReason()]++;
  }

  // Find the maximum count
  int max_count = 0;
  for (const auto& pair : count_map) {
    max_count = std::max(max_count, pair.second);
  }

  for (const auto& pair : count_map) {
    if (pair.second == max_count) {
      most_common_leftover_reasons.push_back(pair.first);
    }
  }
  return most_common_leftover_reasons;
}

// Most Common Disposal Mechanism
std::vector<std::string> LeftoverReport::MostCommonDisposalMechanisms() const {
  // Map to store disposal mechanisms and their counts
  std::map<std::string, int> count_map;

  // Iterate through all leftover records to count occurrences of each disposal
  // mechanism
  for (const LeftoverRecord& record : records) {
    // Increment the count for the disposal mechanism
    count_map[record.GetDisposalMechanism()]++;
  }

  // Find the maximum count
  int max_count = 0;
  for (const auto& pair : count_map) {
    if (pair.second > max_count) {
      max_count = pair.second;
    }
  }

  // Vector to store most common disposal mechanisms
  std::vector<std::string> most_common_disposal_mechanisms;
  for (const auto& pair : count_map) {
    if (pair.second == max_count) {
      most_common_disposal_mechanisms.push_back(pair.first);
    }
  }
  return most_common_disposal_mechanisms;
}

// Suggested Strategies
std::vector<std::string> LeftoverReport::SuggestedStrategies() const {
  std::vector<std::string> strategies;
  bool expired = false;
  bool less_food_added = false;
  // Count occurrences of each reason
  for (const auto& reason : LeftoverReport::MostCommonReasons()) {
    // Suggest strategies based on the most common reason
    if (reason == "Expired") {
      expired = true;
      strategies.push_back("Donate before expiration");
    }

    if (reason == "Too much left overs") {
      strategies.push_back("Cook small servings");
    }

    if ((reason == "Too much left overs" || reason == "Tastes bad") &&
        less_food_added == false) {
      less_food_added = true;
      strategies.push_back("Buy less food");
    }
  }
  // If the most common reason is not "Expired", suggest "Recycle leftovers"
  if (expired == false && less_food_added == true) {
    strategies.push_back("Recycle left overs");
  }

  return strategies;
}