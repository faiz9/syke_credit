#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
  Account();
  virtual ~Account() = default;
  void setLatePayment();
  Derogatory getLatePayment() const;
  void setBalanceOwed();
  int getBalanceOwed() const;
  virtual std::string getAccountType() = 0;  //makes the class abstract

private:
  Derogatory latePayment;
  int balanceOwed;

};

#endif
