
#ifndef ORDER_H
#define ORDER_H

// This code is for placing the order

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
