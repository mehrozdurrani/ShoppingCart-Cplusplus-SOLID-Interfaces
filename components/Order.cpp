
#include "ICart.h"
#include "ICustomer.h"
#include "Order.h"

void Order::Checkout(ICart *cart, ICustomer *customer)
{
    this->cart = cart;
    this->customer = customer;
}
