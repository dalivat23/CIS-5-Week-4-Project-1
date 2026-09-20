#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
// To make coding lines easier to type out/read (convinence)

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

  int grad_year = CURRENT_YEAR + 4;

 cout << "\n====== STUDENT CARD ======\n"
 "Name: " << firstn << "\n"
 "Age: " << age << "\n"
 "Credits: " << credits << "\n"
 "GPA: " << gpa << "\n"
 "Expected Graduation: " << grad_year << "\n"
 "==========================\n";
   
  // Test line to confirm data was being properly stored 
  // cout << "tests " << firstn << " " << age << " " << credits << " " << gpa << " ";

  return 0;
}
