// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric

#include "leftover_tracker.h"
#include "leftover_report.h"
#include <algorithm>
#include <iostream>

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
// AddLeftoverRecord
bool LeftoverTracker::AddLeftoverRecord(const LeftoverRecord& record) {
  for (const LeftoverRecord& existing_record : leftover_records_) {
    if (existing_record == record) {
      return false;
    }
  }
  leftover_records_.push_back(record);
  return true;
}
// DeleteLeftoverRecord
bool LeftoverTracker::DeleteLeftoverRecord(const LeftoverRecord& record) {
  auto it = std::find(leftover_records_.begin(), leftover_records_.end(), record);
  if (it != leftover_records_.end()) {
    leftover_records_.erase(it);
    return true;
  } else {
  return false;
  }
}
// GetRecords
const std::vector<LeftoverRecord>& LeftoverTracker::GetRecords() const {
  return leftover_records_;
}
// GenerateLeftoverRecords
LeftoverReport LeftoverTracker::GetLeftoverReport() const {
  LeftoverReport report(leftover_records_.begin(), leftover_records_.end());
  return report;
}
