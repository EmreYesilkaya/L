#include "Wine.h"
#include <iostream>

// Statik üye değişkenin başlangıç değeri
float Wine::staticWineExcise = 0;

Wine::Wine(const std::string& kind, const std::string& region) : wineKind(kind), wineRegion(region) {
    std::cout << "Wine object created. Kind: " << wineKind << ", Region: " << wineRegion << std::endl;
}

void Wine::setWineKind(const std::string& kind) {
    wineKind = kind;
}

std::string Wine::getWineKind() const {
    return wineKind;
}

void Wine::setWineRegion(const std::string& region) {
    wineRegion = region;
}

std::string Wine::getWineRegion() const {
    return wineRegion;
}

void Wine::setYearOfProduction(int year) {
    // Bu örnekte basit bir çıktı ile simüle edilmiştir, gerçek bir uygulamada daha karmaşık işlemler gerekebilir.
    std::cout << "Year of production for " << wineKind << " set to " << year << std::endl;
}

void Wine::setColour(const std::string& colour) {
    // Rengi ayarlamak için basit bir işlem
    std::cout << "Colour of " << wineKind << " set to " << colour << std::endl;
}

void Wine::setTypeOfPackaging(const std::string& type) {
    // Ambalaj tipini ayarlamak için basit bir işlem
    std::cout << "Packaging type of " << wineKind << " set to " << type << std::endl;
}

void Wine::setPackSize(float size) {
    // Paket boyutunu ayarlamak için basit bir işlem
    std::cout << "Pack size of " << wineKind << " set to " << size << " liters" << std::endl;
}

void Wine::setProducer(const std::string& producer) {
    // Üreticiyi ayarlamak için basit bir işlem
    std::cout << "Producer of " << wineKind << " set to " << producer << std::endl;
}

void Wine::setCountry(const std::string& country) {
    // Ülkeyi ayarlamak için basit bir işlem
    std::cout << "Country of origin for " << wineKind << " set to " << country << std::endl;
}

void Wine::getDrinkFeatures() const {
    std::cout << "Wine kind: " << wineKind << ", Region: " << wineRegion << ", Excise: " << staticWineExcise << "%" << std::endl;
}

void Wine::setWineExcise(float excise) {
    staticWineExcise = excise;
}

float Wine::getWineExcise() {
    return staticWineExcise;
}
