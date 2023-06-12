
#include <iostream>
#include <vector>
#include <algorithm>
#include "IProduct.h"
#include "Cart.h"

using namespace std;

Cart::Cart()
{
    // This is the contructor of Cart
}

void Cart::addProducttoCart(IProduct *product)
{
    // adding the product to the cart
    products.push_back(product);
}
void Cart::removeProductfromCart(IProduct *product)
{
    // removin product from the cart.
}

double Cart::getTotalPriceofCart() const
{
    double totalPrice = 0.0;
    for (const auto &product : products)
    {
        totalPrice += product->getProductPrice();
    }
    return totalPrice;
}
void Cart::ViewCart() const
{
    cout << "You have following products in the cart";

    for (const auto &product : products)
    {
        cout << product->getProductName() << " Costs: " << product->getProductPrice() << endl;
    }
}
