#include <iostream>
#include "ICart.h"
#include "Customer.h"

Customer::Customer(std::string name)
{
    this->name = name;
}
void Customer::setCart(ICart *cart)
{
    this->cart = cart;
}
ICart *Customer::getCart() const
{
    return this->cart;
}
