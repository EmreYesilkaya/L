#ifndef DRINK_H
#define DRINK_H

#include <iostream>
#include <string>
#include "InterfaceDrinkFeatures.h" // Ensure this path is correct

class Drink : public InterfaceDrinkFeatures {
private:
    float price;
    int warehouseQty; // Depo miktarı
    int boughtQty; // Satın alınan miktar
    int drinkQty; // İçecek miktarı
    std::string taste[10]; // Tatlar
    std::string ingredients[20]; // İçindekiler
    // Additional properties required by InterfaceDrinkFeatures
    int yearOfProduction;
    std::string colour;
    std::string typeOfPackaging;
    float packSize;
    std::string producer;
    std::string country;

public:
    Drink();
    Drink(const std::string& newName, float newPrice, int newWarehouseQty, int newBoughtQty, 
          int newDrinkQty, const std::string newTaste[10], const std::string newIngredients[20]);
    ~Drink();
    std::string name;
    // Setters
    void setName(const std::string& newName);
    void setPrice(float newPrice);
    void setTaste(const std::string newTaste[10]);
    void setIngredients(const std::string newIngredients[20]);

    // InterfaceDrinkFeatures methods implementation
    void setYearOfProduction(int year) override;
    void setColour(const std::string& colour) override;
    void setTypeOfPackaging(const std::string& type) override;
    void setPackSize(float size) override;
    void setProducer(const std::string& producer) override;
    void setCountry(const std::string& country) override;
    void getDrinkFeatures() const override;

    // Additional Drink class specific methods
    void buyDrink(int qty);
    void displayDrinkInfo() const;
    std::string currentDateTime() const;
};

#endif // DRINK_H
