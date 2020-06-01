#ifndef INSTALLMENTLOAN_H
#define INSTALLMENTLOAN_H

class InstallmentLoan : public Account
{
public:
  InstallmentLoan();
  void setPayOffDate();
  virtual std::string getAccountType();

private:
  Date payOffDate;
  std::string accountType;
};

#endif
