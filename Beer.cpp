#include "Beer.h"
#include <iostream>

// Initialize static member variable
float Beer::staticBeerExcise = 0.0f;

// Corrected constructor implementation
Beer::Beer(const std::string& name, float price, int qty, const std::string& kind)
    : name(name), price(price), qty(qty), beerKind(kind) {
    std::cout << "Beer object created. Kind: " << beerKind << std::endl;
}

void Beer::setBeerKind(const std::string& kind) {
    beerKind = kind;
}

std::string Beer::getBeerKind() const {
    return beerKind;
}

void Beer::setYearOfProduction(int year) {
    std::cout << "Year of production for " << name << " set to " << year << std::endl;
}

void Beer::setColour(const std::string& colour) {
    std::cout << "Colour of " << name << " set to " << colour << std::endl;
}

void Beer::setTypeOfPackaging(const std::string& type) {
    std::cout << "Type of packaging for " << name << " set to " << type << std::endl;
}

void Beer::setPackSize(float size) {
    std::cout << "Pack size for " << name << " set to " << size << " units." << std::endl;
}

void Beer::setProducer(const std::string& producer) {
    std::cout << "Producer for " << name << " set to " << producer << std::endl;
}

void Beer::setCountry(const std::string& country) {
    std::cout << "Country for " << name << " set to " << country << std::endl;
}

void Beer::getDrinkFeatures() const {
    std::cout << "Beer kind: " << beerKind << ", Excise: " << staticBeerExcise << "%" << std::endl;
}

void Beer::setBeerExcise(float excise) {
    staticBeerExcise = excise;
    std::cout << "Static beer excise set to " << staticBeerExcise << "%" << std::endl;
}

float Beer::getBeerExcise() {
    return staticBeerExcise;
}
