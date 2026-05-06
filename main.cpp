/******************************************************************************
# Author:           Andy Joy
# Assignment:       Assignment 3
# Date:             04/12/2026
# Description:      Calculator to find the fare for the Washington state ferries.
#                   
# Input:            Employee ID number (int), hours worked (int), hourly rate
#                   (int), and federal withholding rate (int).
# Output:           Gross pay, federal tax withholdin, and net pay.
# Sources:          N/A
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//main function
int main() {

  //variables declared
  char choice = ' ';
  int numAdults = 0;
  int numSeniors = 0.0;
  int num

  //Welcome Message
  cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;

  //Chart
  cout << "\n" << setw(10) << left  << "Fare Description";
  cout << setw(51) << right << "Ticket $" << endl;
  
  cout << setfill('-') << setw(38) << "";
  cout << setfill(' ') << setw(21) << "";
  cout << setfill('-') << setw(8) << "" << endl;
  cout << setfill(' ');

  cout << setw(10) << left  << "Vehicle Under 14' (less than 168”) & Driver";
  cout << setw(23) << right << "$57.90" << endl;
  cout << setw(10) << left  << "Adult (age 19 - 64)";
  cout << setw(47) << right << "$14.95" << endl;   
  cout << setw(10) << left  << "Senior (age 65 & over) / Disability";
  cout << setw(30) << right << "$7.40" << endl;
  cout << setw(10) << left  << "Youth (age 6 - 18)";
  cout << setw(47) << right << "$5.55" << endl;
  cout << setw(10) << left  << "Bicycle Surcharge (included with Vehicle)";
  cout << setw(24) << right << "$4.00" << endl;


  //user input

  cout << "Are you riding a vehicle on the Ferry (Y/N): "

  if (choice != 'Y' && choice != 'N') {
    cout << "Error!! Invalid answer!! Please try again later!!!" << endl;
  }

  else {
    if (choice == 'Y')
    {
      cout << "How many adults? ";
      cin >> numAdults;
      cout << "How many seniors? ";
      cin >> numSeniors;
      cout << "How many youths? ";
      cin >> numYouths;
    } 

    else if (choice == 'N')
    {
      cout << "Enter the number of bonds: ";
      cin >> numShare;
      cout << "Enter the price of each bond: $";
      cin >> price;
      commPercent = BD_COMM;
    } 

  /*cout << "Enter your employee ID number (numbers only): ";
  cin >> employeeIDNumber;
  cout << "Enter number of hours worked (whole numbers): ";
  cin >> hoursWorked;
  cout << "Enter the hourly rate: $";
  cin >> hourlyRate;
  cout << "Enter the federal withholding rate: ";
  cin >> federalWithholdingRate;
  cout << endl;
  
  //calculations
  grossPay = hoursWorked * hourlyRate;
  federalTaxWithholding = grossPay * (federalWithholdingRate / 100.0);
  netPay = grossPay - federalTaxWithholding;

  //output to the user
  cout << "Your Payroll Summary:" << endl;
  cout << "Total Gross Pay: $" << grossPay << endl;
  cout << "Federal Tax Withholding: $" << federalTaxWithholding << endl;
  cout << "Net Pay: $" << netPay << endl;
  cout << endl;
  cout << "Thank you for using my Weekly Payroll program!!";*/

  return 0;
}