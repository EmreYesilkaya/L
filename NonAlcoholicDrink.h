#ifndef NON_ALCOHOLIC_DRINK_H
#define NON_ALCOHOLIC_DRINK_H

#include "InterfaceDrinkFeatures.h"
#include <string>

class NonAlcoholicDrink : public InterfaceDrinkFeatures {
private:
    std::string typeOfDrink;

public:
    NonAlcoholicDrink(const std::string& type);

    void setTypeOfDrink(const std::string& type);
    std::string getTypeOfDrink() const;

    // InterfaceDrinkFeatures'dan gelen saf sanal fonksiyonların uygulanması:
    void setYearOfProduction(int year) override;
    void setColour(const std::string& colour) override;
    void setTypeOfPackaging(const std::string& type) override;
    void setPackSize(float size) override;
    void setProducer(const std::string& producer) override;
    void setCountry(const std::string& country) override;
    void getDrinkFeatures() const override;
};

#endif // NON_ALCOHOLIC_DRINK_H
