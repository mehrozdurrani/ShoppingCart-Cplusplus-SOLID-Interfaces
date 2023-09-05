
#ifndef CART_H
#define CART_H

#include <iostream>
#include <vector>
#include "IProduct.h"
#include "ICart.h"

class Cart : public ICart
{
public:
    Cart();
    void addProducttoCart(IProduct *product) override;
    void removeProductfromCart(IProduct *product) override;
    double getTotalPriceofCart() const override;
    void ViewCart() const override;

private:
    vector<IProduct *> products;
};

#endif