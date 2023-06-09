#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "IProduct.h"

using namespace std;

class Product : public IProduct
{
public:
    Product(int id, string name, double price, int quantity);
    int getProductId() const override;
    string getProductName() const override;
    double getProductPrice() const override;
    int getProductQuantity() const override;

private:
    int id;
    string name;
    double price;
    int quantity;
};

#endif