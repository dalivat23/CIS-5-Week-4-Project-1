#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
// To make coding lines easier to type out/read


// Project 1 — Tristan Daliva
// CIS 5 Week 04 · Student card

int main() {
  const int CURRENT_YEAR = 2026;
  string firstn;
  int age;
  int credits;
  double gpa;

  cout << "What is your first name? ";
  cin >> firstn;
  
  cout << "What is your current age? ";
  cin >> age;

  cout << "How many credits are you taking this term? ";
  cin >> credits;

  cout << "What is your current GPA? ";
  cin >> gpa;

  
  
  
  cout << "tests " << firstn << " " << age << " " << credits << " " << gpa << " ";
  // TODO (week 3): declare and initialize the four boxes
  //   first (std::string), age (int), credits (int), gpa (double)

  // TODO (week 2): a cout question, then a cin into the box — four times

  // TODO (week 4): one computed line with an operator
  //   int grad_year = CURRENT_YEAR + 4;

  // TODO (weeks 1-4): print the card from the variable names
  //   header line, one labeled line per variable, then the computed value

  return 0;
}
