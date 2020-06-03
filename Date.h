#ifndef DATE_H
#define DATE_H

class Date
{
public:
  Date(int month, int day, int year);
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
  int getDay() const;
  int getMonth() const;
  int getYear() const;

private:
  int day;
  int month;
  int year;

};

#endif