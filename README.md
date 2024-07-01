# Drink Management System

This project is a C++ based Drink Management System created by Emre Yeşilkaya. It is designed to efficiently manage a variety of drinks, including alcoholic and non-alcoholic beverages. The system leverages object-oriented programming (OOP) principles to create a robust and flexible management solution.

## Project Structure

The project is organized into several files, each serving a specific purpose:

- **main.cpp**: The entry point of the application.
- **Spirits.cpp & Spirits.h**: Source and header files for managing spirits (alcoholic drinks).
- **Wine.cpp & Wine.h**: Source and header files for managing wines.
- **NonAlcoholicDrink.cpp & NonAlcoholicDrink.h**: Source and header files for managing non-alcoholic drinks.
- **Drink.cpp & Drink.h**: Source and header files for the base class of all drinks.
- **InterfaceDrinkFeatures.h**: Header file for defining the interface for drink features.
- **AlcoholicDrink.cpp & AlcoholicDrink.h**: Source and header files for managing alcoholic drinks.
- **Beer.cpp & Beer.h**: Source and header files for managing beers.
- **Accounting.cpp & Accounting.h**: Source and header files for accounting-related functionalities.

## Getting Started

### Prerequisites

To build and run this project, you need to have the following tools installed:

- GCC (GNU Compiler Collection)
- G++ (GNU C++ Compiler)
- GDB (GNU Debugger)

### Building the Project

1. Ensure that you have the required tools installed and properly configured in your PATH.
2. Navigate to the project directory.
3. Use the following command to build the project:

    ```bash
    g++ -o DrinkManagementSystem main.cpp Spirits.cpp Wine.cpp NonAlcoholicDrink.cpp Drink.cpp AlcoholicDrink.cpp Beer.cpp Accounting.cpp
    ```

### Running the Application

After building the project, you can run the executable:

```bash
./DrinkManagementSystem
Configuration Files
This project includes several configuration files to assist with building and debugging:

tasks.json: Contains the tasks configuration for building the project.
settings.json: Contains settings related to the C++ project, including compiler paths, standards, and warning configurations.
c_cpp_properties.json: Configuration for IntelliSense in Visual Studio Code.
launch.json: Configuration for debugging the project.
Contributing
If you would like to contribute to this project, please fork the repository and create a pull request with your changes.

License
This project is licensed under the MIT License. See the LICENSE file for details.
