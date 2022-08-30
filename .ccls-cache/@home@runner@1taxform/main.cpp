/*Program: taxform.cpp
Author: Gaston Honomou
Compute a person's income tax.
1. Significant constants
        tax rate
        standard deduction
        deduction per dependents
2. The inputs are
        gross income
        number of dependents
3. Computations:
        taxable income = gross income - the standard
                deduction for each dependent.
        income tax = is a fixd percentage of taxable income.
4. The outputs are
        the income tax*/


// Include the header file
#include <iostream>
using namespace std;

// Initialize the constants
const double TAX_RATE = 0.20;
const double STANDARD_DEDUCTION = 10000.0;
const double DEPENDENT_DEDUCTION = 3000.0;

// Initilize the entry point of the program
int main() {

  // Request the inputs
  float grossIncome = 0;
  int numDependents = 0;

  cout<<"Enter the gross income: ";
  cin>>grossIncome;
  cout<<"Enter the number of dependents: ";
  cin>>numDependents;

  // Compute the income tax
  double taxableIncome = 0;
  taxableIncome = grossIncome - STANDARD_DEDUCTION - DEPENDENT_DEDUCTION * numDependents;

  double incomeTax = 0;
  incomeTax = taxableIncome * TAX_RATE;

  // Display the income tax
  cout<<"The income tax is: "<<incomeTax<<"\n\n";

  cout<<"Program terminated.";
  

  return 0;
  

}