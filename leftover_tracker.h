#ifndef LEFTOVER_TRACKER_H_
#define LEFTOVER_TRACKER_H_

// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric
#include <vector>

#include "leftover_record.h"
#include "leftover_report.h"

class LeftoverTracker {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverTracker class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  // Defuault Constructor
  LeftoverTracker();

  // AddLeftoverRecord
  bool AddLeftoverRecord(const LeftoverRecord& record);
  // DeleteLeftoverRecord
  bool DeleteLeftoverRecord(const LeftoverRecord& record);
  // GetRecords
  std::vector<LeftoverRecord> GetAllRecords() const;
  // GenerateLeftoverRecords
  LeftoverReport GenerateLeftoverReport() const;

 private:
  std::vector<LeftoverRecord> records;
};

#endif
