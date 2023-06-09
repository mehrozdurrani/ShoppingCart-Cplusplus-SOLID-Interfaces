
#ifndef ORDER_H
#define ORDER_H

#include "ICart.h"
#include "ICustomer.h"

class Order
{
public:
    void Checkout(ICart *cart, ICustomer *customer);

private:
    ICart *cart;
    ICustomer *customer;
};

#endif