 C++ Project: Using Interfaces and SOLID Principles

Welcome to the C++ project that demonstrates the usage of interfaces (pure virtual functions) and SOLID principles.

## Table of Contents
- [Overview](#overview)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [SOLID Principles](#solid-principles)
- [Contributing](#contributing)
- [License](#license)

## Overview

This C++ project is designed to provide a clear understanding of how to use interfaces (pure virtual functions) and apply SOLID principles, specifically addressing issues like circular dependencies and promoting modularity in your code.

## Project Structure

The project is structured as follows:

- `OnlineShoppingCart.cpp`: The main application entry point.
- `interfaces/`: Directory containing interface declarations.
- `components/`: Directory containing classes that implement the interfaces.
- `headers/`: Directory containing headers of the component classes.


## Usage

To use this project:

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Build the project using your preferred C++ compiler.
4. Run the compiled executable to see how interfaces and SOLID principles are applied in practice.

Run Command:
```g++ OnlineShoppingCart.cpp components/Cart.cpp components/Order.cpp components/Product.cpp components/Customer.cpp -o OnlineShoppingCart```

## SOLID Principles

This project demonstrates the following SOLID principles:

- **Single Responsibility Principle (SRP)**: Each class or interface has a single, well-defined responsibility.
- **Open/Closed Principle (OCP)**: The code is open for extension (e.g., adding new components) but closed for modification.
- **Liskov Substitution Principle (LSP)**: Subtypes (implementations of interfaces) are substitutable for their base types.
- **Interface Segregation Principle (ISP)**: Interfaces are small, specific, and client-focused.
- **Dependency Inversion Principle (DIP)**: High-level modules depend on abstractions (interfaces), not concrete implementations.

## Contributing

The contribution is viable, allowed to fork the project and use it.

## License

This project is licensed under the [MIT License](LICENSE).
