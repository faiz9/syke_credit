#ifndef REVOLVINGCREDIT_H
#define REVOLVINGCREDIT_H

class RevolvingCredit : public Account
{
public:
  RevolvingCredit();
  void setInitDate();
  Date getInitDate();
  void setCreditLimit();
  int getCreditLimit();
  virtual std::string getAccountType();

private:
  Date initDate;
  int creditLimit;
  std::string accountType;
};

#endif
