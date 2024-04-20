// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric

#include "leftover_tracker.h"

#include <algorithm>
#include <iostream>

#include "leftover_report.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_tracker.h), only
// if you didn't implement them inline within leftover_tracker.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverTracker
// class.
// ===================================================================
// Default Constructor
LeftoverTracker::LeftoverTracker() {}

// AddLeftoverRecord
bool LeftoverTracker::AddLeftoverRecord(const LeftoverRecord& record) {
  // Check if record exists already
  for (const LeftoverRecord& r : records) {
    if (r.GetDate() == record.GetDate() && r.GetMeal() == record.GetMeal() &&
        r.GetFoodName() == record.GetFoodName() &&
        r.GetQuantityOz() == record.GetQuantityOz() &&
        r.GetLeftoverReason() == record.GetLeftoverReason() &&
        r.GetDisposalMechanism() == record.GetDisposalMechanism() &&
        r.GetCost() == record.GetCost()) {
      return false;
    }
  }

  // No duplicate found, add the record
  records.push_back(record);
  return true;
}

// DeleteLeftoverRecord
bool LeftoverTracker::DeleteLeftoverRecord(const LeftoverRecord& record) {
  for (auto it = records.begin(); it != records.end(); ++it) {
    if ((*it).GetDate() == record.GetDate() &&
        (*it).GetMeal() == record.GetMeal() &&
        (*it).GetFoodName() == record.GetFoodName() &&
        (*it).GetQuantityOz() == record.GetQuantityOz() &&
        (*it).GetLeftoverReason() == record.GetLeftoverReason() &&
        (*it).GetDisposalMechanism() == record.GetDisposalMechanism() &&
        (*it).GetCost() == record.GetCost()) {
      records.erase(it);
      return true;
    }
  }
  return false;
}
// GetRecords
std::vector<LeftoverRecord> LeftoverTracker::GetAllRecords() const {
  return records;
}
// GenerateLeftoverRecords
LeftoverReport LeftoverTracker::GenerateLeftoverReport() const {
  return LeftoverReport(records);
}
