#include <iostream>
//#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;

void start() {
  string firstName;
  string lastName; 
  cout<<"Enter your first name: ";
  getline(cin,firstName);
  cout<<"Enter your last name: ";
  getline(cin,lastName);
  cout<<"Welcome, " <<firstName<<"!"<<endl;
}

Date* getDateQuestions() {
  string date;
  int day;
  int month;
  int year;
  int locSpace1;
  string monthPresent;
  int locSpace2;
  string dayPresent;
  string yearPresent;
  
  cout << "Please enter the date that is associated with the question (separated by spaces) [EX:MM DD YYYY]: ";
  getline(cin, date);

  locSpace1 = date.find(' ', 0);  //find the first space location
  monthPresent = date.substr(0, locSpace1);  //return a copy of string at specified length
  locSpace2 = date.find(' ', ++locSpace1);  //find the second space location
  dayPresent = date.substr(locSpace1, locSpace2 - locSpace1); //return a copy of string at specified length
  yearPresent = date.substr(++locSpace2, date.length()); //return a copy of string at specified length

  month = stoi(monthPresent);  //stoi converts a string to an int
  day = stoi(dayPresent);
  year = stoi(yearPresent);
  cout<<month<<"/"<<day<<"/"<<year;

  Date *dateObj = new Date(month, day, year); 
  return dateObj;
}

/* bool Bankruptcy(){
  bool hasbankrupt;
  Date bankruptDate;
  int yearsSince;

  cout<<"Have you filed for Bankruptcy in the last 7 years? ";
  cin>>hasbankrupt;
  if (hasbankrupt) {

  }
} */


int main() {
 start();
 getDateQuestions();

 
 
}


