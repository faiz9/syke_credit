#ifndef DEROGATORY_H
#define DEROGATORY_H

class Derogatory
{
public:
  Derogatory();
  void setHasLatePayment();
  bool getHasLatePayment() const;
  void setNumLatePayments();
  void getNumLatePayments() const;
  void seLatestDerogatory();
  Date getLatestDerogatory() const;

private:
  bool hasLatePayment;
  int numLatePayments;
  Date latestDerogatory;

};

#endif
