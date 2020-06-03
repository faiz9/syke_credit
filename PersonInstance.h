#ifndef PERSONINSTANCE_H
#define PERSONINSTANCE_H

#include <vector>
#include "Bankruptcy.h"
#include "Date.h"
#include "Account.h"

class PersonInstance
{
public:

private:
  Bankruptcy bankrupt;
  Date instanceDate;
  int sykeScore;
  std::vector <Account*> accounts;

};

#endif
