#ifndef BANKRUPTCY_H
#define BANKRUPTCY_H

#include "Date.h"

class Bankruptcy
{
public:
  Bankruptcy();
  void setBankruptcy();
  bool getBankruptcy() const;
  void setBankruptDate();
  Date getBankruptDate() const;
  void setYearsSince();
  int getYearsSince() const;

private:
  bool hasBankruptcy;
  Date bankrupt;
  int yearsSinceBnkrpt;
};

#endif
