#include <iostream>

#include "ICustomer.h"
#include "ICart.h"

#include "Product.h"
#include "Order.h"
#include "Cart.h"
#include "Customer.h"

using namespace std;

int main()
{
    ICustomer *customer = new Customer("Mehroz");
    Order *order = new Order();
    ICart *cart = new Cart();

    customer->setCart(cart);
    customer->getCart()->addProducttoCart(new Product(1, "UsbWire", 22.5, 2));
    customer->getCart()->addProducttoCart(new Product(2, "Pencil", 15, 1));
    customer->getCart()->addProducttoCart(new Product(3, "Rubber", 3.8, 1));

    customer->getCart()->ViewCart();

    order->Checkout(cart, customer);

    return 0;
}

// new code
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Forward Declaration
class ICustomer;
class ICart;
class IProduct;

class ICustomer
{
public:
    virtual void setCart(ICart *cart) = 0;
    virtual ICart *getCart() = 0;
};

class ICart
{
public:
    virtual void addProductToCart(IProduct *product) = 0;
    virtual void removeProductFromCart(IProduct *product) = 0;
    virtual double getTotalPriceOfCart() const = 0;
    virtual void viewCart() const = 0;
};

class IProduct
{
public:
    virtual int getProductId() const = 0;
    virtual string getProductName() const = 0;
    virtual double getProductPrice() const = 0;
    virtual int getProductQuantity() const = 0;
};

class Customer : public ICustomer
{
public:
    Customer(string name)
    {
        this->name = name;
    }
    void setCart(ICart *cart) override;
    ICart *getCart() override;

private:
    string name;
    ICart *cart;
};

class Cart : public ICart
{
public:
    void addProductToCart(IProduct *product) override;
    void removeProductFromCart(IProduct *product) override;
    double getTotalPriceOfCart() const override;
    void viewCart() const override;

private:
    vector<IProduct *> products;
};

class Product : public IProduct
{
public:
    Product(int id, string name, double price, int quantity)
    {
        this->id = id;
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
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

class Order
{
public:
    void Checkout(ICart *cart, ICustomer *customer)
    {
        this->cart = cart;
        this->customer = customer;
    }

private:
    ICart *cart;
    ICustomer *customer;
};

// Implementations

void Customer::setCart(ICart *cart)
{
    this->cart = cart;
}

ICart *Customer::getCart()
{
    return this->cart;
}

void Cart::addProductToCart(IProduct *product)
{
    products.push_back(product);
}

void Cart::removeProductFromCart(IProduct *product)
{
    // products.erase(remove_if(products.begin(), products.end(), [&](IProduct *prod)
    //                          { return product->getProductId() == prod->getProductId(); }),
    //                products.end());
}

double Cart::getTotalPriceOfCart() const
{
    double totalPrice = 0.0;
    for (const auto &product : products)
    {
        totalPrice += product->getProductPrice();
    }
    return totalPrice;
}

void Cart::viewCart() const
{
    cout << "You have the following products in the cart:" << endl;

    for (const auto &product : products)
    {
        cout << product->getProductName() << " Costs: " << product->getProductPrice() << endl;
    }
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

int main()
{
    ICustomer *customer = new Customer("Mehroz");
    Order *order = new Order();
    ICart *cart = new Cart();

    customer->setCart(cart);
    customer->getCart()->addProductToCart(new Product(1, "UsbWire", 22.5, 2));
    customer->getCart()->addProductToCart(new Product(2, "Pencil", 15, 1));
    customer->getCart()->addProductToCart(new Product(3, "Rubber", 3.8, 1));

    customer->getCart()->viewCart();

    order->Checkout(cart, customer);

    delete customer;
    delete order;
    delete cart;

    return 0;
}
*/