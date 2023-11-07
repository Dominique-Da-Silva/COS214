#ifndef PAYMENT_H
#define PAYMENT_H

class paymentMethod{

public:
    virtual void pay(double amount) = 0;
    virtual double calculateTotal(double subtotal, double out) = 0;
};

#endif