#include "NonAlcoholicDrink.h"
#include <iostream>

NonAlcoholicDrink::NonAlcoholicDrink(const std::string& type) : typeOfDrink(type) {
    std::cout << "NonAlcoholicDrink object created with type: " << typeOfDrink << std::endl;
}

void NonAlcoholicDrink::setTypeOfDrink(const std::string& type) {
    typeOfDrink = type;
}

std::string NonAlcoholicDrink::getTypeOfDrink() const {
    return typeOfDrink;
}

void NonAlcoholicDrink::setYearOfProduction(int year) {
    // Yıl bilgisini ayarlama işlemi
}

void NonAlcoholicDrink::setColour(const std::string& colour) {
    // Rengi ayarlama işlemi
}

void NonAlcoholicDrink::setTypeOfPackaging(const std::string& type) {
    // Ambalaj tipini ayarlama işlemi
}

void NonAlcoholicDrink::setPackSize(float size) {
    // Paket boyutunu ayarlama işlemi
}

void NonAlcoholicDrink::setProducer(const std::string& producer) {
    // Üreticiyi ayarlama işlemi
}

void NonAlcoholicDrink::setCountry(const std::string& country) {
    // Ülkeyi ayarlama işlemi
}

void NonAlcoholicDrink::getDrinkFeatures() const {
    std::cout << "NonAlcoholic Drink: Type is " << typeOfDrink << std::endl;
}
