#ifndef BEER_H
#define BEER_H

#include "InterfaceDrinkFeatures.h"
#include <string>

class Beer : public InterfaceDrinkFeatures {
private:
    std::string name; // Assuming you have a name for each Beer object
    float price; // Assuming you store price for each Beer object
    int qty; // Assuming quantity is a property of Beer
    std::string beerKind;
protected:
    static float staticBeerExcise;    

public:
    // Corrected constructor to match the definition in Beer.cpp
    Beer(const std::string& name, float price, int qty, const std::string& kind);

    void setBeerKind(const std::string& kind);
    std::string getBeerKind() const;

    // Overridden methods from InterfaceDrinkFeatures
    void setYearOfProduction(int year) override;
    void setColour(const std::string& colour) override;
    void setTypeOfPackaging(const std::string& type) override;
    void setPackSize(float size) override;
    void setProducer(const std::string& producer) override;
    void setCountry(const std::string& country) override;
    void getDrinkFeatures() const override;

    // Static methods for handling beer excise
    static void setBeerExcise(float excise);
    static float getBeerExcise();
};

#endif // BEER_H
