
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "ICart.h"
#include "ICustomer.h"

class Customer : public ICustomer
{
public:
    Customer(std::string name);
    void setCart(ICart *cart) override;
    ICart *getCart() const override;

private:
    string name;
    ICart *cart;
};

#endif