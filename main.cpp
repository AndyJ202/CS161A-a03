/******************************************************************************
# Author:           Andy Joy
# Assignment:       Assignment 3
# Date:             05/05/2026
# Description:      Calculator to find the fare for the Washington state
#                   ferries.
# Input:            Choice (char), numAdults (int), numSeniors (int),
#                   numYouths (int), and numBikes (int).
# Output:           Total fare (double) and difference for a free ticket on
#                   next trip (double).
# Sources:          Zybooks, 2.12 Output formatting.
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//constants declared
const double VEHICLE_FARE = 57.90;
const double ADULT_FARE = 14.95;
const double SENIOR_FARE = 7.40;
const double YOUTH_FARE = 5.55; 
const double BIKE_SURCHARGE = 4.00;

//main function
int main() {

  //variables declared
  char choice = ' ';
  int numAdults = 0;
  int numSeniors = 0;
  int numYouths = 0;
  int numBikes = 0;
  double totalFare = 0.0;

  //welcome message
  cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;

  //chart
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

  //user input, output, and calculations
  cout << "\nAre you riding a vehicle on the Ferry (Y/N): ";
  cin >> choice;

  //check for valid input for vehicle choice
  if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
    cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
  }

  //yes vechicle
  else if (choice == 'Y' || choice == 'y') {
    cout << "\nHow many adults? ";
    cin >> numAdults;
    if (numAdults < 0) {
      cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
    }
    else {
      cout << "How many seniors? ";
      cin >> numSeniors;
      if (numSeniors < 0) {
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
      }
      else {
        cout << "How many youths? ";
        cin >> numYouths;
        if (numYouths < 0) {
          cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        }
        else if (numAdults + numSeniors + numYouths <= 0) {
          cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        }
        else if (numAdults + numSeniors + numYouths > 20) {
          cout << "\nUh oh!! Too many people in your group. Split into 2 groups and try again!" << endl;
        }
        else {
          totalFare = (numAdults * ADULT_FARE) + (numSeniors * SENIOR_FARE) + (numYouths * YOUTH_FARE) + VEHICLE_FARE;
          if (totalFare >= 100.00) {
            cout << fixed << setprecision(2) << showpoint << "\nYour total charge is $" << totalFare << endl;
            cout << fixed << setprecision(2) << showpoint << "\nYou are eligible for a free adult ticket for the next trip!!" << endl;
          }
          else {
            cout << fixed << setprecision(2) << showpoint << "\nYour total charge is $" << totalFare << endl;
            cout << fixed << setprecision(2) << showpoint << "\nIf you spend $" << (100.00 - totalFare) << " more, you are eligible for a free adult ticket for the next trip." << endl;
          }
        }
      }
    }
  }

  //no vehicle
  else if (choice == 'N' || choice == 'n') {
    cout << "\nHow many adults? ";
    cin >> numAdults;
    if (numAdults < 0) {
      cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
    }
    else {
      cout << "How many seniors? ";
      cin >> numSeniors;
      if (numSeniors < 0) {
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
      }
      else {
        cout << "How many youths? ";
        cin >> numYouths;
        if (numYouths < 0) {
          cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        }
        else {
          cout << "How many bikes? ";
          cin >> numBikes;
          if (numBikes < 0) {
            cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
          }
          else if (numAdults + numSeniors + numYouths <= 0) {
            cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
          }
          else if (numAdults + numSeniors + numYouths > 20) {
            cout << "\nUh oh!! Too many people in your group. Split into 2 groups and try again!" << endl;
          }
          else {
            totalFare = (numAdults * ADULT_FARE) + (numSeniors * SENIOR_FARE) + (numYouths * YOUTH_FARE) + (numBikes * BIKE_SURCHARGE);
            if (totalFare >= 100.00) {
              cout << fixed << setprecision(2) << showpoint << "\nYour total charge is $" << totalFare << endl;
              cout << fixed << setprecision(2) << showpoint << "\nYou are eligible for a free adult ticket for the next trip!!" << endl;
            }
            else {
              cout << fixed << setprecision(2) << showpoint << "\nYour total charge is $" << totalFare << endl;
              cout << fixed << setprecision(2) << showpoint << "\nIf you spend $" << (100.00 - totalFare) << " more, you are eligible for a free adult ticket for the next trip." << endl;
            }
          }
        }
      }
    }
  }

  cout << "\nThank you for using Washington State Ferries Fare Calculator!" << endl;

  return 0;
}