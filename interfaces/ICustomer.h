
#ifndef ICUSTOMER_H
#define ICUSTOMER_H

#include "Cart.h"

class ICustomer
{
public:
    virtual void setCart(ICart *cart) = 0;
    virtual ICart *getCart() const = 0;
};

#endif