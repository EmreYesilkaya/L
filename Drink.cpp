#include "Drink.h"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>

// Helper function to convert std::chrono::system_clock::time_point to string
std::string timePointToString(const std::chrono::system_clock::time_point& timePoint) {
    std::time_t now_time = std::chrono::system_clock::to_time_t(timePoint);
    std::tm* time_tm = std::localtime(&now_time);

    std::stringstream ss;
    ss << std::put_time(time_tm, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}

Drink::Drink()
    : name(""), price(0.0), warehouseQty(0), boughtQty(0), drinkQty(0), yearOfProduction(0), packSize(0.0) {
    std::fill_n(taste, 10, "");
    std::fill_n(ingredients, 20, "");
    std::cout << "Class: Drink was created at " << currentDateTime() << " ..." << std::endl;
}

Drink::Drink(const std::string& newName, float newPrice, int newWarehouseQty, int newBoughtQty, 
             int newDrinkQty, const std::string newTaste[10], const std::string newIngredients[20])
    : name(newName), price(newPrice), warehouseQty(newWarehouseQty), boughtQty(newBoughtQty), drinkQty(newDrinkQty), 
      yearOfProduction(0), packSize(0.0) {
    std::copy(newTaste, newTaste + 10, taste);
    std::copy(newIngredients, newIngredients + 20, ingredients);
    std::cout << "Class: Drink was created at " << currentDateTime() << " ..." << std::endl;
}

Drink::~Drink() {
    std::cout << "Class: " << name << " is destroyed at " << currentDateTime() << "..." << std::endl;
}

void Drink::setName(const std::string& newName) {
    name = newName;
}

void Drink::setPrice(float newPrice) {
    price = newPrice;
}

void Drink::setTaste(const std::string newTaste[10]) {
    std::copy(newTaste, newTaste + 10, taste);
}

void Drink::setIngredients(const std::string newIngredients[20]) {
    std::copy(newIngredients, newIngredients + 20, ingredients);
}

void Drink::setYearOfProduction(int year) {
    yearOfProduction = year;
}

void Drink::setColour(const std::string& colour) {
    this->colour = colour;
}

void Drink::setTypeOfPackaging(const std::string& type) {
    typeOfPackaging = type;
}

void Drink::setPackSize(float size) {
    packSize = size;
}

void Drink::setProducer(const std::string& producer) {
    this->producer = producer;
}

void Drink::setCountry(const std::string& country) {
    this->country = country;
}

void Drink::getDrinkFeatures() const {
    // Example implementation
    std::cout << "Drink Features - Name: " << name 
              << ", Price: $" << price 
              << ", Year of Production: " << yearOfProduction 
              << ", Colour: " << colour 
              << ", Type of Packaging: " << typeOfPackaging 
              << ", Pack Size: " << packSize 
              << ", Producer: " << producer 
              << ", Country: " << country << std::endl;
}

void Drink::buyDrink(int qty) {
    if (qty > 0 && warehouseQty >= qty) {
        warehouseQty -= qty;
        drinkQty += qty;
        std::cout << qty << " " << name << " bought. " << drinkQty << " now in stock." << std::endl;
    } else {
        std::cout << "Not enough stock for " << name << " or invalid quantity." << std::endl;
    }
}

void Drink::displayDrinkInfo() const {
    std::cout << "Drink Information:\n"
              << "Name: " << name << "\n"
              << "Price: $" << price << "\n"
              << "Quantity in Warehouse: " << warehouseQty << "\n"
              << "Quantity Bought: " << boughtQty << "\n"
              << "Quantity in Stock: " << drinkQty << "\n"
              << "Year of Production: " << yearOfProduction << "\n"
              << "Colour: " << colour << "\n"
              << "Type of Packaging: " << typeOfPackaging << "\n"
              << "Pack Size: " << packSize << "\n"
              << "Producer: " << producer << "\n"
              << "Country: " << country << std::endl;
}

std::string Drink::currentDateTime() const {
    return timePointToString(std::chrono::system_clock::now());
}
