#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_

// DONE: please fill in below.
// Esther Anne Ricardo
// CPSC 121L-11
// April 2, 2024
// estheranne@csu.fullerton.edu
// @estherric
#include <string>

class LeftoverRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  // Deafult Constructor
  LeftoverRecord();
  // Date
  const std::string& GetDate() const;
  void SetDate(const std::string& date);

  // Meal
  const std::string& GetMeal() const;
  void SetMeal(const std::string& meal);

  // Food Name
  const std::string& GetFoodName() const;
  void SetFoodName(const std::string& food_name);

  // Quantity in Oz
  double GetQuantityOz() const;
  void SetQuantityOz(double qty_in_oz);

  // Leftover Reason
  const std::string& GetLeftoverReason() const;
  void SetLeftoverReason(const std::string& leftover_reason);

  // Disposal Mechanism
  const std::string& GetDisposalMechanism() const;
  void SetDisposalMechanism(const std::string& disposal_mechanism);

  // Cost
  double GetCost() const;
  void SetCost(double cost);

  // Overloaded Operator==
  bool operator==(const LeftoverRecord& other) const;

 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double qty_in_oz_;
  std::string leftover_reason_;
  std::string disposal_mechanism_;
  double cost_;
};

#endif
