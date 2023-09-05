
#ifndef IPRODUCT_H
#define IPRODUCT_H
#include <iostream>

using namespace std;

class IProduct
{
public:
    virtual int getProductId() const = 0;
    virtual string getProductName() const = 0;
    virtual double getProductPrice() const = 0;
    virtual int getProductQuantity() const = 0;
};

#endif