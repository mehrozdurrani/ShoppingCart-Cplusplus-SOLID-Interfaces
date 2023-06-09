#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(int id, string name, double price, int quantity)
{
    this->id = id;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}
int Product::getProductId() const
{
    return id;
}
string Product::getProductName() const
{
    return name;
}
double Product::getProductPrice() const
{
    return price;
}
int Product::getProductQuantity() const
{
    return quantity;
}
