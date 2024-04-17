// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric

#include "leftover_tracker.h"

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
// Constructor
LeftoverTracker::LeftoverTracker() {}
// Destructor
LeftoverTracker::~LeftoverTracker() {}

// AddLeftoverRecord
bool LeftoverTracker::AddLeftoverRecord(const LeftoverRecord& record) {
  for (const auto& existing_records : records_) {
    if (existing_records == record) {
      return false;
    }
  }
  records_.push_back(record);
  return true;
}
// DeleteLeftoverRecord
bool LeftoverTracker::DeleteLeftoverRecord(const LeftoverRecord& record) {
  auto it = std::find(records_.begin(), records_.end(), record);
  if (it != records_.end()) {
    records_.erase(it);
    return true;
  }
  return false;
}
// GetAllLeftoverRecords
const std::vector<LeftoverRecord>& LeftoverTracker::GetAllLeftoverRecords() const {
  return records_;
}
// GenerateLeftoverRecords
LeftoverReport LeftoverTracker::GenerateLeftoverRecords() const {
  Leftover Report report;
  for (const auto& record : records_) {
    record.AddRecord(record);
  }
  return report;
}
