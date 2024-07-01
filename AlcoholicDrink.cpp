#include "AlcoholicDrink.h"
#include <iostream>

AlcoholicDrink::AlcoholicDrink(float degree) : degreeOfAlcohol(degree) {
    std::cout << "AlcoholicDrink class created with degree of alcohol: " << degreeOfAlcohol << std::endl;
}

void AlcoholicDrink::setDegreeOfAlcohol(float degree) {
    degreeOfAlcohol = degree;
}

float AlcoholicDrink::getAlcohol() const {
    return degreeOfAlcohol;
}

void AlcoholicDrink::calculateExciseTaxes() {
    float tax = degreeOfAlcohol * 0.2; // Basit bir vergi hesaplama
    std::cout << "Excise tax for alcohol degree " << degreeOfAlcohol << " is: " << tax << std::endl;
}

void AlcoholicDrink::setYearOfProduction(int year) {
    // Yıl bilgisini ayarlama işlemi
}

void AlcoholicDrink::setColour(const std::string& colour) {
    // Rengi ayarlama işlemi
}

void AlcoholicDrink::setTypeOfPackaging(const std::string& type) {
    // Ambalaj tipini ayarlama işlemi
}

void AlcoholicDrink::setPackSize(float size) {
    // Paket boyutunu ayarlama işlemi
}

void AlcoholicDrink::setProducer(const std::string& producer) {
    // Üreticiyi ayarlama işlemi
}

void AlcoholicDrink::setCountry(const std::string& country) {
    // Ülkeyi ayarlama işlemi
}

void AlcoholicDrink::getDrinkFeatures() const {
    std::cout << "Alcoholic Drink: Degree of alcohol is " << getAlcohol() << "%" << std::endl;
}
