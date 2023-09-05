
#ifndef ICART_H
#define ICART_H

#include "IProduct.h"

class ICart
{
public:
    virtual void addProducttoCart(IProduct *product) = 0;
    virtual void removeProductfromCart(IProduct *product) = 0;
    virtual double getTotalPriceofCart() const = 0;
    virtual void ViewCart() const = 0;
};

#endif